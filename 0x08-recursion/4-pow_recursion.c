#include "main.h"

/**
 *  * _pow_recursion - Returns the value of x raised to the power of y.
 *   * @x: The number to be multiply.
 *    * @y: The times to multiply the value
 *     *
 *      * Return: The value of x multiplied y times.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
