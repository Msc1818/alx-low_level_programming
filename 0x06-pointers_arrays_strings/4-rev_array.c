#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: an array of integers
 * @n: number of elements of an array
 *
 */
void reverse_array(int *a, int n)
{
	int d;
	int rev;

	d = 0;
	n = n - 1;

	while (d < n)
	{
		rev = a[d];
		a[d] = a[n];
		a[n] = rev;
		d++;
		n--;
	}
}
