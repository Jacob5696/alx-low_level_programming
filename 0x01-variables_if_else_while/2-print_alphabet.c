#include <stdio.h>

/**
 * main - a program to print the alphabet.
 *
 * Return: must return 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int l;

	for (l = 0; l < 26; l++)
	{
		putchar(alp[l]);
	}
	putchar('\n');
	return (0);
}
