#include "main.h"
/**
 * _abs - computes absolute value of an integer.
 *
 * @j: integer value of a number
 *
 * Return: Absolute value
 */

int _abs(int j)
{
	if (j >= 0)
	{
		return (j);
	}
	else
	{
		return (j * -1);
	}
}
