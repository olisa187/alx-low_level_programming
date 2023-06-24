#include "main.h"

/**
 * print_most_numbers - program does not print 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num < (48 + 10); num++)
	{
		if (num == (48 + 2) || num == (48 + 4))
		{
			continue;
		}
		else
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
