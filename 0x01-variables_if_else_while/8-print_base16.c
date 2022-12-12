
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

	for (i = 0; i <= 15; i++)
	{
		if (i < 10)
		putchar(i + '0');
		else
		{
		putchar(i - 10 + 'a');
		}
  	}
	putchar('\n');
	return (0);
}
