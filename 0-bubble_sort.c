#include "sort.h"
#include <stdbool.h>


/**
 * swap_ints - Swap integers in two array.
 * @c: First int to swap.
 * @d: Second int to swap.
 */
void swap_ints(int *c, int *d)
{
	int tmp;

	tmp = *c;
	*c = *d;
	*d = tmp;
}

/**
 * bubble_sort - Array sort of int in ascending order.
 * @array: Array of int to sort.
 * @size: Size of array.
 *
 * Description: Prints array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (j = 0; j < len - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_ints(array + j, array + j + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
