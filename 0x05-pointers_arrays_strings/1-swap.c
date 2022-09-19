#include "main.h"

/**
 * swap_int - function that swap two integers
 * @a: first integer
 * @b: second integer
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
