#include <stdio.h>

/**
 * main - Entry ppoint
 *
 * Description - Print combination of three numbers using
 * spaces amd commas.
 * Return: 0(Success)
 */

int main(void)
{
	int i = 0;
	int j,k;
	int count = 0;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (count != 119)
				{
					putchar(',');
					putchar(' ');
					count++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
