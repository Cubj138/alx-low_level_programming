#include "main.h"

/**
 * puts_half - prints half of a string
 *@str: parameter
 *
 * Return: returns nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int j, length_of_the_string, n;

	while (str[i] != '\0')
	{
		i++;
	}
	length_of_the_string = i;
	if (i % 2 == 0)
	{
		for (j = (i / 2); j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
		for (j = (n + 1); j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar(10);
}
