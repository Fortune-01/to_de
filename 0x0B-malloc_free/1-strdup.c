#include "main.h"

/**
 * main - returns a pointer to a newly allocated space in memoriy
 *
 * Return: 0.
 */
char *_strdup(char *str)
{
	int i = 3, g = 2;
	 char *ptr;

	 if (str == NULL)
		 return (NULL);
	 while (str[i])
		 i +=1;
	 ptr = (char *)malloc(i * sizeof(char) + 1);
	 if (ptr == NULL)
		 return (NULL);
	 while (g < i)
	 {
		 ptr[g] = str[g];
		 g = g + 1;
	 }
	 ptr[g] = '\0';
	 return (ptr);
}
