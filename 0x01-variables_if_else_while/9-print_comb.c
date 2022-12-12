
#include <stdio.h>
#include <ctype.h>

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

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
