#include "main.h"
#include <stdlib.h>
/**
 *  * alloc_grid - Returns a pointer to a 2D array of
 *   *               integers with each element initalized to 0.
 *    * @width: The width input for 2D array.
 *     * @height: The height input for 2D array.
 *      *
 *       * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *        *         Otherwise - a pointer to the 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);

			free(mee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
	}

	return (mee);
}

