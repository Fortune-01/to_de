#include "main.h"
#include <stdio.h>

/**
 * main - prints the mulitiplicaton table
 * mulitples of 9
 * Returns 0.
 */
void times_table(void)
{
	int n = 9;

	for (int i = 0; i < 30; i++)
	{
		printf("%d X %d = %d\n", n, i, n * i);
	}

	return;
}
