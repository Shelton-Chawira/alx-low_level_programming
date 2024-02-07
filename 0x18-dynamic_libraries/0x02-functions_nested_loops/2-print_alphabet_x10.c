#include "main.h"

/**
 * print_alphabet_x10 - print 10x alphabet
 *
 * Return: 0(Success)
 */
void print_alphabet_x10(void)
{
	int No_JAM = 0;

	while (No_JAM < 10)
	{
		char JAM = 'a';

		while (JAM <= 'z')
		{
			_putchar(JAM);
			JAM++;
		}

		_putchar('\n');
		No_JAM++;
	}
}
