#include "main.h"

/**
 * _isalpha - function that checks weather a character entered is an alphabet
 * @c: parameter in the function above
 * Return: 0 on successful excution
 */
int _isalpha(int c)
{
	int checkAlpha = ((c >= 97 && c < 122) || (c >= 65 && c <= 90));

	return (checkAlpha);
}
