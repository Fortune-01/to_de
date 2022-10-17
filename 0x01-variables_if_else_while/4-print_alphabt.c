#include <stdio.h>
/**
 * main - print all the letters in lowercase execpt e and q
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
	putchar('\n');
		return (0);

}
