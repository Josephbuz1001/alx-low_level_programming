#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from j to 98.
 * @j: input number.
 * Return: o return
 */

void print_to_98(int j)
{
	if (j > 98)
	{

		for (; j > 98; j--);
		{
			printf("%d, ", j);
		}
	}
	else if (j < 98)
	{
		for (; j < 98; j++)
		{
			printf("%d, ", j);
		}
	}
	printf("%d\n", j);
}
