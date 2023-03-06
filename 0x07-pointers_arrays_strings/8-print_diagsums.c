#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int e, sum1 = 0, sum2 = 0;

	for (e = 0; e < size; e++)
	{
		sum1 += a[e];
		sum2 += a[size - e - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
