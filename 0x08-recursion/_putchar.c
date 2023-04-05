#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * Return: on success 1
 *
 */

int _putchar(char c)
{
	return write(STDOUT_fileno, &c, 1);
}
