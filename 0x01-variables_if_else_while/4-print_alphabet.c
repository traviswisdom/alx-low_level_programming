#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success);
 */
int main(void)
{
        int c;

        for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' && c == 'q')
			continue;
	}
                putchar(c);
        putchar('\n');
        return (0);
}
