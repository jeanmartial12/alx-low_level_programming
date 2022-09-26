#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: address to memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory block
 */

char *_menset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
