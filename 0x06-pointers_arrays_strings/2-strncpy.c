#include "main.h"

/**
 * _strncpy - copies one string to another
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
