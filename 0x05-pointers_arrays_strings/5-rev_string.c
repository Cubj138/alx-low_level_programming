#include "main.h"

/**
 * rev_string - reverses a string
 *@s: parameter
 *
 * Return: returns nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	i -= 1;
	for (j = 0; j < (i + 1) / 2; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
