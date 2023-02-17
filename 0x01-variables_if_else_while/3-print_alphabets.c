#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry block
 * Description: alphabets printed in lower and upper
 * Return: 0
 */
int main(void)
{
        char c , m ;
        c = 'a';
        m = 'A';
        while (c <= 'z')
        {
                putchar(c);
                c++;
        }
        while (m <= 'Z')
        {
                putchar(m);
                m++;
        }
        putchar('\n');
        return (0);
}
