#include "main.h"
/**
 * main - Print 10 times the alphabets, in lower case
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char j;
	char x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
