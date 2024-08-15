#include "main.h"

/**
 * _islower - checks if the character is in lowercase or uppercase
 * @c: Tested character
 *
 * Return: returns 1 if lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
