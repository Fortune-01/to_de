#include "main.h"

/**
 * create an array of chars,
 * and intilizes it wwith a specific char
 * @size: the size of memory to print
 *
 * Return: 0.
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i;

	i = 0;

	str = malloc(size);

	if (size == 0)
	{
		return (NULL);
	}	
	if (str == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
		/**
		 * i+=1
		 * i=i+1
		 */
	{
		str[i] = c;
	}
	return (str);
}
