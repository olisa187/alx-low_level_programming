#include "main.h"
#include <stdio.h>

/**
 * main - fizzel out programmers
 * print fizz if num is a multiple of 3
 * print buzz if num is a multiple of 5
 * Return:  0 on success
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i == 1)
			printf("%d ", i);
		else
			printf(" %d", i);
	}
	return (0);
}
