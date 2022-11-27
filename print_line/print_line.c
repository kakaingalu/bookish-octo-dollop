#include "main.h"

/**
 * print_line - functions that peints straight line
 * @n: the number of times the character _ should be printed
 * 
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
