#include "main.h"

/**
 * print_last_digit - prints the last digit of the number inputed
 *@n: parameter
 *
 * Return: returns the value of the last digit
 */

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit *= -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
