#include "main.h"

/**
 *_pow_recursion - a function that returns the value of x tothe power of y
 *@x: value to raise to
 *@y: the power
 *Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
