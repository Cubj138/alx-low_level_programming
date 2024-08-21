#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *@a: parameter
 *@b: parameter
 *
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
