#include "main.h"

/**
 * _strncat: a function that concatenates two strings
 * using at most n bytes from src
 * @dest: this is the input value
 * @src: this is output value
 * @n: input value
 * Return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;
	
	len1 = 0;
	len2 = 0;

	while (dest[len1] != '\0')
		len1++;

	while (len2 < n && src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = '\0';
	return (dest);
}
