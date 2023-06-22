#include "main.h"

/**
 * positive_or_negative - function to check positive and negative numbers
 * all calc is done inside the function
 * Return: nothing
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
