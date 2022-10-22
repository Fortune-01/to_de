#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int e, f;

	if (n <= 0)
		_putchar('\n');

	for (e = 0; e < n; e++)
	{
		for (f = 0; f < e; f++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
