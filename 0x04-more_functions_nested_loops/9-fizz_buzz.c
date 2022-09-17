#include <stdio.h>
/**
 * main - check the code for holberton school students.
 *
 * Return: void
 */

int main(void)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i & 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		i{
			printf("%i", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);
}
