#include <stdio.h>

/**
 * main - display lowercase and uppercase letter
 * uses putchar function to acheieve this task
 * Return: 0
 */
int main(void)
{
	char alphabet;
	/* create a loop */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
