#include <stdio.h>
/**
 * main main -  writes program name
 * @rgc: argument count
 * @argv: array of pointers to CLI arguement
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
