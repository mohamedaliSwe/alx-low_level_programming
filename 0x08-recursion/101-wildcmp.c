#include "main.h"


/**
 * wildcmp - compares two strings, considering '*' as a wildcard
 * @s1: the first string (normal string)
 * @s2: the second string (can contain '*')
 *
 * Return: 1 if strings can be considered identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
