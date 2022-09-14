#include "main.h"
/**
 * print_sign - print the sign of a number
 *
 * @j: the number of which the sign will be printed
 *
 * Return: if greater than 0 returns 1. if 0 returns 0. if less than 0, -1.
 */

int print_sign(int j)
{
	if (j > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (j < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
