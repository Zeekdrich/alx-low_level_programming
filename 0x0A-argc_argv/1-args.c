#include <stdio.h>

/**
 * main - Prints the name of arguments passed into it
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings 
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0)
}
