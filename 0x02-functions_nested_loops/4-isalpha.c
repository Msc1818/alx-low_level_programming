#include "main.h"

/**
 * _isalpha - check if character is lower case
 * c: character to be checked
 * c descriptionn
 * Return: 1 if lowercase 0 otherwhise
 */
int _isalpha(int c)
{
	char lw, up;
	int let = 0;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (c == lw || c == up)
				let = 1;
		}
	}
	return (let);
}
