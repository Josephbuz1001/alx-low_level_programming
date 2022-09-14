#include "main.h"
/**
 * _islower - check the code
 *
 * @c: check for lowercase character
 *
 * Return: 1 for lowercase. 0 for the rest.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
