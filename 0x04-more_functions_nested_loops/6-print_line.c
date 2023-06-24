#include "main.h"

/**
 * print_line - print a straight line
 * @n: number of times to print _
 * Return: nothing but a diaplay
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num;

		for (num = 0; num < n; num++)
			_putchar('_');
		_putchar('\n');
	}
}
