#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	char letter = 'a'; //Starting letter a

	while (letter <= 'z') {
		putchar(letter); //Print the letter
		letter++; //Go to the next letters untill done
	}

	putchar('\n'); //Print a new line

	return 0; //Exit the program
}
