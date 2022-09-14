#include "main.h"
/**
 * times_table - prints a time table
 *
 * Return: no return
 */

int times_table(void)
{
	int a, b, j;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			j = a * b;
			_putchar(44);
			_putchar(32);
			if (j <= 9)
			{
				_putchar(32);
				_putchar(j + 48);
			}
			else
			{
				_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
