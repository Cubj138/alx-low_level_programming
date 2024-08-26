#include "main.h"

/**
 * string_toupper - converts all charcters to upper case
 *@str: string to be converted
 *
 *Return: returns uppercase
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
