#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int f;
	int e;

	f = 0;

	while (dest[f] != 0)
	{
		f++;
	}

	e = 0;

	while (src[e] != 0)
	{
		dest[f] = src[e];
		f++;
		e++;
	}
	return (dest);
}
