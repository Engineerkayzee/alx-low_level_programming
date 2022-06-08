#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Description: print lowercase alphabet a to z
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
