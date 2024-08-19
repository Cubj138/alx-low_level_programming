#include "main.h"

/**
 * print_line - prints a line according to n
 *@n: parameter
 *
 * Return: returns nothing
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
