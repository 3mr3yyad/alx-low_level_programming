#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr h);

/**
 * print_magic - main
 * @h: ELF header
 */

void print_magic(Elf64_Ehdr h)
{
	int x;

	printf("  Magic:   ");

	for (x = 0; x < EI_NIDENT; x++)
		printf("%2.2x%s", h.e_ident[x], x == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - main
 * @h: ELF header
 */

void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");

	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;

		case ELFCLASS32:
			printf("ELF32");
		break;

		case ELFCLASSNONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_data - main
 * @h: ELF header
 */

void print_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
		break;

		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;

		case ELFDATANONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_version - main
 * @h: ELF header
 */

void print_version(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);

	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;

		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}

/**
 * print_osabi - main
 * @h: the ELF header struct
 */

void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");

	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;

		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;

		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;

		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;

		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;

		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;

		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;

		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;

		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;

		default:
			print_osabi_more(h);
			break;
	}
	printf("\n");
}


/**
 * print_osabi_more - main
 * @h: ELF header
 */

void print_osabi_more(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;

		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;

		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;

		case ELFOSABI_ARM:
			printf("ARM");
			break;

		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_abiversion  - main
 * @h: ELF header
 */

void print_abiversion(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n",
		h.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the ELF type
 * @h: the ELF header struct
 */

void print_type(Elf64_Ehdr h)
{
	char *p = (char *)&h.e_type;
	int x = 0;

	printf("  Type:                              ");

	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		x = 1;
	switch (p[x])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;

		case ET_REL:
			printf("REL (Relocatable file)");
			break;

		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;

		case ET_DYN:
			printf("DYN (Shared object file)");
			break;

		case ET_CORE:
			printf("CORE (Core file)");
			break;

		default:
			printf("<unknown>: %x", p[x]);
		break;
	}
	printf("\n");
}

/**
 * print_entry - main
 * @h: ELF header
 */

void print_entry(Elf64_Ehdr h)
{
	int x = 0, lng = 0;
	unsigned char *p = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");

	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		x = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[x])
			x--;
		printf("%x", p[x--]);

		for (; x >= 0; x--)
			printf("%02x", p[x]);
		printf("\n");
	}
	else
	{
		x = 0;
		lng = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[x])
			x++;
		printf("%x", p[x++]);

		for (; x <= lng; x++)
			printf("%02x", p[x]);
		printf("\n");
	}
}

/**
 * main - program that displays the information contained
 * in the ELF header at the start of an ELF file
 *
 * @_argc: argc
 * @_argv: argv
 * Return: 1 on success 0 on failure
 */

int main(int _argc, char **_argv)
{
	int fd;
	Elf64_Ehdr h;
	ssize_t a;

	if (_argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	fd = open(_argv[1], O_RDONLY);

	if (fd == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", _argv[1]), exit(98);
	a = read(fd, &h, sizeof(h));

	if (a < 1 || a != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", _argv[1]), exit(98);

	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
			h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", _argv[1]), exit(98);

	print_magic(h);
	print_class(h);
	print_data(h);
	print_version(h);
	print_osabi(h);
	print_abiversion(h);
	print_type(h);
	print_entry(h);

	if (close(fd))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fd), exit(98);

	return (EXIT_SUCCESS);
}

