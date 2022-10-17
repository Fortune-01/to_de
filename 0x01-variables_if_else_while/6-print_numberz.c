#include <stdio.h>
/**
 * main - print all single digit using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');
	putchar('\n');

	return (0);
}
