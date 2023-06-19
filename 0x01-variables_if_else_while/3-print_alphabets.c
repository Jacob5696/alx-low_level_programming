#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase then uppercase
 *
 * Return: must return 0
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int l;

	for (l = 0; l < 52; l++)
	{
		putchar(alp[l]);
	}
	putchar('\n');
	return (0);
}
