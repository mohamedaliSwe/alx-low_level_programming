#include "main.h"

/**
*_isAlpha - Checks if a letter is lowercase or uppercase
*@c: The character to be checked
*
*Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
