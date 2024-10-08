#include "main.h"

/**
 * _memcpy - copies memory area
 *@dest: destination where memory is being copied into
 *@src:the area where the memory is being copied from
 *@n: the anout of bytes to be copied
 *
 *Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
