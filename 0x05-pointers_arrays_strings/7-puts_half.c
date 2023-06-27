#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @s: passed string to be printed
 * Return: void
 */

void puts_half(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	length = length / 2;
	while (*(s + length) != '\0')
	{
		s++;
	}
	printf("%s", s);
	printf("\n");
}
