#include "main.h"

/**
 * factorial - Fucntion that returnes the facoral of a given number.
 * @n: Given number.
 * Return: Factoral of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
