#include <stdio.h>

/**
 * main  - prints numbers between 012 to 789.
 *
 * Return: Always 0 (successs)
 */

int main(void)
{
	int d1;
	int d2;
	int d3;
	int d4;

	for (d1 = 0; d1 < 8; d1++)
	{
		for (d2 = d1 + 1; d2 < 9; d2++)
		{
			for (d3 = d2 + 1; d3 < 10; d3++) 
			{
				for (d4 = d3 + 1; d4 < 10; d4++) 
				{
					putchar(d1 + '0');
					putchar(d2 + '0');
					putchar(d3 + '0');
					putchar(d4 + '0');
					if (d1 == 6 && d2 == 7 && d3 == 8 && d4 == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
