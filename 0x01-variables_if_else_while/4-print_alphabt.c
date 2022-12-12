
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
	char x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		char small = tolower(x);

		if (small == 'q' || small == 'e')
			continue;
	
		putchar(small);
	}
	putchar('\n');
	return (0);
}
