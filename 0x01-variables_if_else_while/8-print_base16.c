#include <stdio.h>
#include <stdlib.h>
/**
* main - main block
* Description: prints 0_to_9 then a_to_f
* Return: 0
*/
int main(void)
{
	char c;
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}


	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
