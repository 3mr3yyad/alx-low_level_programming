#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - main
 * @a: input
 * @b: input1
 * Return: sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - main
 * @a: input
 * @b: input1
 * Return: sub
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - main
 * @a: input
 * @b: input1
 * Return: mul
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - main
 * @a: input
 * @b: input1
 * Return: mul
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - main
 * @a: input
 * @b: input1
 * Return: div
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
