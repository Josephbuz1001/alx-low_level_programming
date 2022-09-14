#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @j: digit to be confirmed
 *
 * Return: Digit's value.
 */
int print_last_digit(int j)
{
	int a;

	a = j % 10;
	if (a < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar (a + 48);
		return (a);
	}
}
