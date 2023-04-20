#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to print
 * Return: the length of the string
 */

int _putchar(char c);
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
