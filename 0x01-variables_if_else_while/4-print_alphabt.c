#include <stdio.h>

/**
 * main - Prints all characters excluding q and e
 *
 * Return: 0(Success)
 */

int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
	{
		putchar(a);
	}
		a++;
	}
	putchar('\n');
	return (0);

}
