#include "main.h"

/**
 * print_numbers - prints number 0 to 9
 * Return: nothing
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num < (48 + 10); num++)
		_putchar(num);
	_putchar('\n');
}
