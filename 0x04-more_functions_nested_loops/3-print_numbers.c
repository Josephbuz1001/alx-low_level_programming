#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: no return
 */
void print_numbers(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
