#include "sort.h"

/**
 * selection_sort - sorts an array using the selection sorting method
 * @array: the array to be sorted
 * @size: the size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	int *m;
	size_t i, j;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		m = array + i;
		for (j = i + 1; j < size; j++)
			m = (array[j] < *m) ? (array + j) : m;
		if ((array + i) != m)
		{
			tmp = array[i];
			array[i] = *m;
			*m = tmp;
			print_array(array, size);
		}
	}
}
