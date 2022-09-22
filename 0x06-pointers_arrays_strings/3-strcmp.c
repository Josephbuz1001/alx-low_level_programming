#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0 if s1 and s2 are equals
 * another number if not
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, jk = 0;

	while (jk == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		jk = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (jk);
}
