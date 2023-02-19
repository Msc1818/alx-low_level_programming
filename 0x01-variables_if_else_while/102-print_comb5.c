#include <stdio.h>

/**
 * main - the most diffuclt task
 * Return: 0
 */
int main(void)
{
	int j, i;

	for (j = 0; j <= 99; j++)
	{
		for (i = j; i <= 99; i++)
		{
			if (i != j)
			{

				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				putchar(' ');
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);

				if (p == 98 && q == 99)
				continue;
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	putchar('\n');
	return (0);
}
