#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *@str: the string to be accessed
 *
 * Return: returns capitalized string
 */

char *cap_string(char *str)
{
	int j, i = 0;
	int is_delimeter;
	char chars[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}',
		'\t', '\n', '\0'};

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	while (str[i] != '\0')
	{
		is_delimeter = 0;

		for (j = 0; chars[j] != '\0'; j++)
		{
			if (str[i] == chars[j])
			{
				is_delimeter = 1;
				break;
			}
		}
		if (is_delimeter && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
