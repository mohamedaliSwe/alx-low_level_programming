#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	int letter;
	for (letter = 'a'; letter != 'q' || letter != 'e' && letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
