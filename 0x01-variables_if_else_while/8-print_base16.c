#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always return 0
 */
int main(void)
{
	int l;

	for (l = 48; l < 58; l++)
	{
		putchar(l);
	}
	for (l = 97; l < 103; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
