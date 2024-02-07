#include "main.h"

/**
 * print_alphabet - Function to print alphabet
 *
 * Return 0(Success)
 */
void print_alphabet(void)
{
	char JAM = 'a';

	while (JAM <= 'z')
	{
		_putchar(JAM);
		JAM++;
	}

	_putchar('\n');
}
