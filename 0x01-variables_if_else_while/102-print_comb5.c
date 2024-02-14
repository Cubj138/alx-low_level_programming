#include <stdio.h>

/**
 * main - Entry Point
 *
 *
 * Description: Printing possible two two-digit numbers using commas and spaces
 * Return: 0(Success)
 */

int main(void)
{
	int i = 0;
	int j;
	int count = 0;

	for (i = 0; i <= 98; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (count != 4949)
			{
				putchar(',');
				putchar(' ');
				count++;
			}
		}
	}
	putchar('\n');
	return (0);
}
