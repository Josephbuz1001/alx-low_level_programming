#include "main.h"

/**
 * print_most_numbers - prints the most numbers, from 0 to 9.
 * Return: no return
 */
void print_most_numbers(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		if (j != 50 && j != 52)
			_putchar(j);
	}
	_putchar('\n');
}
