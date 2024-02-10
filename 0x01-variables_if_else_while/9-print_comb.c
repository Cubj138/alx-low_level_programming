#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints all digits while using soace and comma
 * Return: 0(Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
