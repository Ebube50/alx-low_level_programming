#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Return: 1 if successfuly executed
 */
int main(void)
{
	write(2, "and that piece of art is usefull\" - Dora Korpa, 2015-10-19\n", 59);
	return (1);
}
