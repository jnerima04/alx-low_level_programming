#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of the input string
 * @s: value to be evaluated
 * Return: not.
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
