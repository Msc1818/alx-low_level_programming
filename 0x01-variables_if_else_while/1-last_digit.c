#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry code
* Description: compare last digit with number 5and 6-
* Return: 0
*/
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, ld);
	else if (last < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	return (0);
}