#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabet 
 * Description: print alphabets
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
