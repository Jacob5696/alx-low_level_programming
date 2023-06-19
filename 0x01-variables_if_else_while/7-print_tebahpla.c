#include <stdio.h>

/**
 * main - printout the lowercase alphabet in reverse
 *
 * Return: should return 0
 */
int main(void)
{
	char mk;

	for (mk = 'z'; mk >= 'a'; mk--)
	{
		putchar(mk);
	}
	putchar('\n');
	return (0);
}
