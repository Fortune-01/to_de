#include "main.h"

/**
 * print numbers - from 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar('0' + a++);

	_putchar('\n');
}
