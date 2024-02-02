#include <stdio.h>

/**
 * main - prints the size of various data types
 *
 * Return: 0(Success)
 */

int main(void)
{
	char c;
	int i;
	long int lt;
	long long int llt;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned char)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long int)sizeof(lt));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llt));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
