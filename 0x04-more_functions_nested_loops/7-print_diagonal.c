#include "main.h"

/**
 * print_diagonal - prints a diagonal according to n
 *@n: parameter
 *
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
