#include "main.h"

/**
*main - function prints text as output
*
*Return:return 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);

	_putchar('\n');
}
