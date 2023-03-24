#include "main.h"
/**
 * _isupper - Entry
 * Return: Always 0 success
 * @c: The input
 */
int _isupper(int c)
{
	if (c >= 'A'  && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
