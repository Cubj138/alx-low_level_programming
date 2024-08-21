#include "main.h"

/**
 * print_rev - prints a string in reverse
 *@s: parameter
 *
 * Return: returns nothing
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++; /* counts the number of characters in string */
		s++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
