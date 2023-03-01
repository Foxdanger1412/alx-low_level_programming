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
 * _strncat - a function that concatenates two strings.
 * @dest: the destination string to be concatenated to
 * @src: the source string to concatenate
 * @n: the most bytes to concatenate to
 *
 * Description: it will use at most n bytes from src
 * and src does not need to be null-terminated if it contains n or more bytes
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, destLen;

	destLen = _strlen(dest);
	j = 0;

	for (i = destLen; i < (destLen + n); i++)
	{
		*(dest + i) = *(src + j);
		j++;
		if (*(src + j) == '\0')
		{
			return (dest);
		}
	}
	return (dest);
}
