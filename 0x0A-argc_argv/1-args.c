#include <stdio.h>

/**
 * main - args num of arg
 * @argc: input
 * @argv: input1
 * Return: 0 = success
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
