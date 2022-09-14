#include "main.h"
/**
 * _isalpha - check the code
 *
 * @b: check for lowercase or uppercase character
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int b)
{
	if ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
		return (1);
	else
		return (0);
}
