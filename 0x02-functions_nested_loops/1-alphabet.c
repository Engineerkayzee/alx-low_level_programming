#include "main.h"

/**
 * main - Entry point
 * Description: print lowercase alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	char y = 'a'
	char terminate = 'z'

	while (y <= 'z')
	{
		_putchar(y);
		y++;
	}
	_putchar('\n');
}
