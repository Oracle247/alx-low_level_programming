#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'a program  that prints the alphabet in lowercase'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == i)
				continue;

            putchar(i + '0');
            putchar(j + '0');
            putchar(',');
            putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}