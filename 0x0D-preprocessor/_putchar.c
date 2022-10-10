#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print 
 *
 * Return: Successful 1
 * On error, -1 is returned, error is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
