#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - function that prints a string in reverse
 * @s: function pointer parameter
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
