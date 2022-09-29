#include "main.h"

/**
 * int factorial - factorial of a given number
 * @n: integer parameter
 * Return: recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
