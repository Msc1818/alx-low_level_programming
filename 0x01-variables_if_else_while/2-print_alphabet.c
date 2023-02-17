#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: print alphabets
 * Return: 0
 */
int main(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
