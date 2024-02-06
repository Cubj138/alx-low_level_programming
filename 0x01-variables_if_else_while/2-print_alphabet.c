#include <stdio.h>

/**
 * main - Prints the alphabet in lower case
 *
 * Return: 0(Success)
 */

int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);

}
