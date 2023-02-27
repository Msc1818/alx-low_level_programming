#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array function that print n element
 * @a: params of print_array function
 * @n: params of print_array function
 */
void print_array(int *a, int n)
{
	int j = 0;

	for (; j < n; j++)
	{
		printf("%d", *(a + j));
		if (j != (n - 1))
			printf(", ");
	}
	printf("\n");
}
