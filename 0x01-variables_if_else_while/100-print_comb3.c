#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description - prints combination of two digits
 * using commas and spaces.
 * Return: 0(Success)
 */

int main(void)
{
	int i = 0;
	int j;
	int count = 0;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (count != 44)
			{
				putchar(',');
				putchar(' ');
			}
			count++;
		}
	}
	putchar('\n');
	return (0);
}
