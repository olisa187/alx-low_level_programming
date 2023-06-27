#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to first function parameter
 * @b: pointer to second function parameter
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
