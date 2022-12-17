#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
        char i,u;

        i = 'a';
	u = 'A';

        while (i <= 'z')
        {
                putchar(i++);
        }
        while (u <= 'Z')
	{
		putchar(u++);
	}
	putchar(10);
        return (0);
}
