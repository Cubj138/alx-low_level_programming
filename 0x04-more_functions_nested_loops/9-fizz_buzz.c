#include "main.h"

/**
 * main - prints digits from 1 to 100 replacing multiples of 3, 5 and (3 and 5)
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;

	while (++i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{

			if (i != 100)
			{
				printf("Buzz ");
			}
			else
				printf("Buzz");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
