#include "sort.h"

/**
 * lomuto - uses the lomuto partitioning scheme for quicksort
 *
 * @array: array to be sorted
 * @low: start point
 * @high: end point
 * @size: size of the array
 *
 * Return: void
 */
void lomuto(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int j = low;
	int i;
	int temp;

	if (low >= high)
		return;

	for (i = low; i < high; i++)
	{
		if (array[i] <= pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;

			j += 1;
			print_array(array, size);
		}
	}
	temp = array[j];
	array[j] = array[high];
	array[high] = temp;

	lomuto(array, low, j - 1, size);
	lomuto(array, j + 1, high, size);
}

/**
 * quick_sort - performs quick sort on an array
 * @size: size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	lomuto(array, 0, size - 1, size);
}
