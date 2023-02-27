#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: the string to be calculated for its length
 *
 * Return: int value contains the length
 */

int _strlen(char *s)
{
	int i, len;

	i = 0;
	len = 0;

	while (*(s + i) != '\0')
	{	len++;
		i++;
	}

	return (len);
}
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
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
/**
 * rev_string - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: the string to be reversed
 *
 * Return: void.
 */


void rev_string(char *s)
{
	int len;

	_puts(s);
	len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
}
