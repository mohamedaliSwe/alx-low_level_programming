#include "main.h"

int is_prime_helper(int n, int divisor);
/**
 *is_prime_number - a function that return 1 if input is a prime integer
 *@n: input value
 *Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_helper(n, n - 1));
}

/**
 *is_prime_helper - function to perform primality check
 *@n: input to bechecked for primality
 *@divisor: the divisor being used in the primality check
 *Return: Always 0 (Success)
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor <= 1)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, divisor - 1));
}
