#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int k, j;

	for (k = 0, j = n - 1; k < j; k++, j--)
	{
		temp = a[k];
		a[k] = a[j];
		a[j] = temp;
	}
}
