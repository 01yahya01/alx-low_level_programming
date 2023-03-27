#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 */

void puts_half(char *str)
{
	int str_len = 0;
	int x = 0;

	while (str[str_len])
		str_len++;

	x = (str_len % 2 == 0) ? str_len / 2 : (str_len + 1) / 2;

	while (str[x])
		_putchar(str[x++]);
	_putchar('\n');
}
