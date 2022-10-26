#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	for (b -= 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
