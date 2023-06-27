#include <stdio.h>
#include <string.h>

/**
 * puts2 - function that prints every other character
 * @str: function pointer parameter
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");
}
