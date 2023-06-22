#include "main.h"

/**
 * print_last_digit - function using modulo extract last dight
 * @n: function parameter
 * Return: last digit on success
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
		n = -n;
	num = n % 10;
	if (num < 0)
		num = -num;
	_putchar(num + '0');
	return (num);
}
