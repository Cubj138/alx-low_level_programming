#include "main.h"

/**
 * _strncat - concatenates two strings
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *
 * Return: returns pointer for dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
