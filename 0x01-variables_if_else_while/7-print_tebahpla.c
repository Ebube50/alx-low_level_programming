#include <stdio.h>
/** 
 * main - prints alpha z to a
 * Return: 0 (success)
 */
int main(void)
{
	char i;
	i = 'z';

	while (i >= 'a')
	{
		putchar(i--);
	}
	putchar('\n');
	return (0);
}
