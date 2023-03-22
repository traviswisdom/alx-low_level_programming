#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - wrietes the characters
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char kofi = 'a';

	while (kofi <= 'z')
	{
		_putchar(kofi);
		kofi++;
	}
	_putchar('\n');
}
