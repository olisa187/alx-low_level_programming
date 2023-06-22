#include "main.h"

/**
 * main - program that print a to z
 * with the use if for loop
 * Return: on success return 0
 */
void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
