#include "main.h"
#include <stdio.h>

/**
 * main - prints the nubers from 1 to 100, followed by a new line
 * but for multiples of three prints fizz instead of the number
 * and for the multiples of five prints buzz
 * Return: always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		for (x % 3 == 0 && x % 5 != 0)
		{
			_putchar(" Fizz");
		}
		else if (x % 5 == 0 && % 3 != 0)
		{
			_putchar(" Buzz");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			_putchar(" FizzBuzz");
		}
		else if (x == 1)
		{
			_putchar("%d", x);
		}
		else
		{
			_putchar(" %d", x);
		}
	}
	_putchar("\n");

	return (0);
}
