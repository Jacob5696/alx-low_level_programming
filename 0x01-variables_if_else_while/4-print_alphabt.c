#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - printout the alphabet except q and e.
 *
 * Return: must return 0
 */
int main(void)
{
	int l;

	for (l = 97; l < 123; l++)
	{
		if (l != 101 && l != 113)
		{
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
