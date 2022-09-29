#include "main.h"

/**
 * _strlen_recursion - Length of a string
 * @s: pointer on string parameters
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
