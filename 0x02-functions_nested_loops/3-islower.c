#include "main.h"

/**
 * _islower - checks which alphabet has a lower ascii value
 * the program either return 0 or 1 depending on the boolean condition returned
 * @c - function parameter
 * Return: 0 on success
 */
int _islower(int c)
{
	int ans = c >= 'a' && c <= 'z';

	return (ans);
}
