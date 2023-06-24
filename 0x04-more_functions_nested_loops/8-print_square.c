#include "main.h"

/**
 * print_square - program to print sqaure of a given size n
 * @n: size of sqaure to be printed
 * Return: print output
 */
void print_square(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
