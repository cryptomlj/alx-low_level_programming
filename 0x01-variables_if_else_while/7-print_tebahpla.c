#include <stdio.h>

/**
 * main - prints the aphabet in lowercase
 * in reverse
 * followed by a new line
 * use only putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
