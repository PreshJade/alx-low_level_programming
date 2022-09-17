#include <stdio.h>
/**
 * main - check the code ffor holberton school students.
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
		else iff (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			_putchar(' ');
		}

		i++;
	}
	_putchar('\n');
	return (0);
}
