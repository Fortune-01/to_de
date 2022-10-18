#include <stdio.h>
/**
 * main - Print the alphabet in lower case letters and in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
