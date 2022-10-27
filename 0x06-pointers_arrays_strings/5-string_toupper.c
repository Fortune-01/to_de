#include "main.h"

/**
 * string_toupper -  changes all lowercase characters
 * @n: change to uppercase
 *
 * Return: nothing
 */

char *string_toupper(char *n)
{
	int f;

	for (f = 0; n[f] != '\0'; f++)
	{
		if (n[f] >= 'a' && n[f] <= 'z')
		n[f] = (int)n[f] - 32;
	}
	return (n);
}
