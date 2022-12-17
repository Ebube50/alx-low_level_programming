#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	i = 'a';

	while(i <= 'z')
	{
		putchar(i++);
	}
	putchar(10);
	return (0);
}
