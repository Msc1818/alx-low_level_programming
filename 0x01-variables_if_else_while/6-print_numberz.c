#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry block
* Description: putchar  single dicimal  numbers
* Return: 0
*/
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	putchar ('0' + c);
	putchar('\n');
	return (0);
}
