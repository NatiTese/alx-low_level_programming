#include "main.h"

/**
 * print_diagonal - prints a diagonla.
 *
 * Return: none.
 */

void print_diagonal(int n)
{
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(" ");
		}
		_putchar("\\\n");
	}
	_putchar("\n");
}
