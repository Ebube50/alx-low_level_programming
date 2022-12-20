/**
 * main - entry point to print _putchar
 * Return: 0 always success
 */
#include <unistd.h>
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
