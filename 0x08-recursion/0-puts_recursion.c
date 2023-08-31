#include "main.h"

/**
 *_puts_recursion - a function similar to puts()
 *@s: input
 *Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\0');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
