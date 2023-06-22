#include "main.h"

/**
 * print_sign - takes an argument to check wheather it is less, greater than or equal to 0
 * @n: parameter to be checked in the function
 * Return: 0 if the parameter is equal to 0 1 if the parameter id greater than 0 and -1 if it is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
