#include <stdio.h>

/**
 * main - revers printing of alphabets
 * program to print alphabet a - z in a reverse order
 * Return: 0
 */
int main(void)
{
	char alphabet;
	for(alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
