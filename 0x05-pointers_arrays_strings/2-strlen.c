#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int cool = 0;

		while (*(s + cool) != '\0')
			cool++;
	return (cool);
}
