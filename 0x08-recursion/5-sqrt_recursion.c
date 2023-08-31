#include "main.h"

int checkroot(int n, int i);
/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: input value
 *Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (checkroot(n, 0));
}

int checkroot(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (checkroot(n, i + 1));
}
