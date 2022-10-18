#include <stdio.h>

/**
 * main - prints all possible combinations of a single-digits numbers
 * numbers must be seperated by , followed by space
 * numbers should be printed in descending order
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
