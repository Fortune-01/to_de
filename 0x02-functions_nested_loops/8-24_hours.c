#include "main.h"
/**
 * jack_bauer -> prints 24 hours
 */
void jack_bauer(void)
{
	int i, j;
	for (j = 0; j < 60; j++)
	{
		if (i < 10)
		{
			_putchar('0');
			_putchar(i + '0');
		}
		else if (i >= 10)
		{

