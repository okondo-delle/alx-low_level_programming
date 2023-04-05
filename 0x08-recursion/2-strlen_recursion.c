#include "main.h"

/**
 *  * _strlen_recursion - calculate the length of a string.
 *   * @s: The string to be counted
 *    *
 *     * Return: integer value
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
