#include <stdio.h>

int main(void)
{
	int n;
	int a[6];
	int *p;

	a[4] = 1024;
	p = &n;
	/*
	 * write the code here....
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line
	 */
	*(p + 6) = 100;
	/* ... so that this prints 100\n */
	printf("a[4] = %d\n", a[4]);
	return (0);
}
