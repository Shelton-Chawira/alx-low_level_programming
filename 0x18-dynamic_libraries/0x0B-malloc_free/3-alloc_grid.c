#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **wy;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	wy = malloc(sizeof(int *) * height);

	if (wy == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		wy[x] = malloc(sizeof(int) * width);

		if (wy[x] == NULL)
		{
			for (; x >= 0; x--)
				free(wy[x]);

			free(wy);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			wy[x][y] = 0;
	}

	return (wy);
}
