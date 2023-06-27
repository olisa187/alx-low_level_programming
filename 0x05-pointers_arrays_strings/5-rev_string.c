#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: function pointer parameter
 * Return: void
 */
void rev_string(char *s)
{
	char p;
	int i, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
	{
		length1++;
	}
	length2 = length1 - 1;
	for (i = 0; i < length1 / 2; i++)
	{
		p = s[i];
		s[i] = s[length2];
		s[length2--] = p;
	}
}
