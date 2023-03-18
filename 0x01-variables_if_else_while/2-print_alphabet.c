#include<stdio.h>
/**
 * main - Prints the alphabet in lower case.
 *
 * Return: 0 (Succcess
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
		int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar("\n"0);
	return (0);
}
