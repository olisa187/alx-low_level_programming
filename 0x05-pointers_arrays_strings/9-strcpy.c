#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - functions that copy and paste string
 * @dest: pointer to copy to
 * @src: pointer to copy from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
