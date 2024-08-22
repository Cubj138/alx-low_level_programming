#include "main.h"

/**
 * puts2 - prints every other character of the string
 *@str: parameter
 *
 * Return: returns nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar(10);
}
