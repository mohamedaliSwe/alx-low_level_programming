#include "main.h"


/**
* palindrome_helper - Recursively checks if a substring is a palindrome.
* @str: The string to check.
* @left: The index of the current character from the left.
* @right: The index of the current character from the right.
*
* Return: 1 if the substring is a palindrome, 0 otherwise.
*/

int palindrome_helper(char *str, int left, int right)
{
	if (left >= right)
		return (1);

	if (str[left] != str[right])
		return (0);

	return (palindrome_helper(str, left + 1, right - 1));
}

/**
 * str_len - Calculates the length of a string.
 * @str: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
int str_len(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + str_len(str + 1));
}

/**
 * is_palindrome - Checks if a given string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (palindrome_helper(s, 0, str_len(s) - 1))
		return (1);
	else
		return (0);
}
