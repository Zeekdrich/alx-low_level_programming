#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of line command arguments
 * @argv: argument vector of pointers to string
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
