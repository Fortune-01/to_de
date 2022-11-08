#include <stdio.h>
/**
 * main - prints all passe arguments
 * @argc: number of argument passed
 * @argv: array of arguments
 *
 * Return: returns nothing
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}
