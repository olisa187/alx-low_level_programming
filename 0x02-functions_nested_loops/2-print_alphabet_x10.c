#include "main.h"

/**
 * print_alphabet_x10 - prints letter a to z completed on 10 different lines
 * program will be acheived using a loop
 * program ends with a new line
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
