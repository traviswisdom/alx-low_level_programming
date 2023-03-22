#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - wrietes the characters
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char o = 'a';

	while (o >= 'z')
	{
		_putchar(o);
		o--;
	}
	_putchar('\n');
}
