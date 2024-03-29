#include "sort.h"

/**
 * lomuto_partition - partitions an array in to smaller segments
 * @array: the array to be partitioned
 * @size: the size of the array
 * @left: the left boundry of the array being partitioned
 * @right: the right boundry of the array being patitioned
 * Return: the final right index of the partition
 */

int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot = array + right;
	int high, low, tmp;

	for (high = low = left; low < right; low++)
	{
		if (array[low] < *pivot)
		{
			if (high < low)
			{
				tmp = array[low];
				array[low] = array[high];
				array[high] = tmp;

				print_array(array, size);
			}
			high++;
		}
	}
	if (array[high] > *pivot)
	{
		tmp = array[high];
		array[high] = *pivot;
		*pivot = tmp;

		print_array(array, size);
	}
	return (high);
}

/**
 * _sort - implements the sort algorithm
 * @array:the array to be partitioned
 * @size: the size of the array
 * @left: the left boundry of the array being partitioned
 * @right: the right boundry of the array being patitioned
 */
void _sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		_sort(array, size, left, part - 1);
		_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - implementation of the quick sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	_sort(array, size, 0, size - 1);
}
