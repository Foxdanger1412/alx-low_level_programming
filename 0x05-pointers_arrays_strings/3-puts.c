#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line,
 * to stdout.
 * @str: the string to be outputed exactly
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		_putchar("%c", *(str + i));
		i++;
	}
	_putchar("\n");
}
