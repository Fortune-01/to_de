#include <stdio.h>
/**
 * main -Entry
 * Return: Always 0
 */
int main(void)
{
	char acharacter;
	int ainteger;
	float afloat;
	long along;
	long long alonglong;

	printf("size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("size of an int: %lu byte(S)\n", sizeof(ainteger));
	printf("size of a float: %lu byte(s)\n", sizeof(afloat));
	printf("size of a long int: %lu byte(s)\n", sizeof(along));
	printf("size of a long long int: %lu byte(s)\n", sizeof(alonglong));
	return (0);
}
