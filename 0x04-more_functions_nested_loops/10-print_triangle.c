#include "main.h"

/**
 * print_triangle - prints a triangle made out of #
 * @size: parameter
 *
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int i = 1;
	int j;
	int k;

	if (size > 0)
	{
		while (i <= size)
		{
			j = size - i;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			k = i - 1;
			while (k >= 0)
			{
				_putchar('#');
				k--;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}

