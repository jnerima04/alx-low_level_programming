#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: value input to be acted on
 * Return: 0
*/

void print_rev(char *s)

{

	int len;

	for (len = 0; s[len] != '\0'; len++)

	{

	}

	for (len = len - 1; len >= 0; len--)

	{

		_putchar(s[len]);

	}

	_putchar('\n');

}
