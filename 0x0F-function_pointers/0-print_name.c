#include <stdio.h>
#include "function_pointers.h"

/**
 * main - funstion that prints a name
 * @name: name of person, object
 *
 * Return: 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f (name);
	}
}
