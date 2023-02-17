#include <stdio.h>
#include <stdlib.h>
/**
* main - main block
* Description: print 0123456789abcdef
* Return: 0
*/
int main(void)
{
	char c;
	char f = '0';

	for (f = 0; f <= '9'; f++)

		putchar(f);


	for (c = 'a'; c <= 'f'; c++)

		putchar(c);

	putchar('\n');
	return (0);
}
