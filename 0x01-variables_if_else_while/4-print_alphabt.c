#include <stdio.h>

/**
 * main - display all alphabets excepts q and e
 * The logical statement will help in acheiving this
 * Return: 0
 */
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
