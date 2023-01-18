#include "sort.h"

/*
 * selection_sort - Function to perform selection sort
 * @array: Arrays of number
 * @size: size of array
 */
void selection_sort(int *array, size_t size);
{
	unsigned int i, j, temp, min_idx;

	for (j = i + 1; j < size; j++)
	{
		if (array[j] < array[min_idx])
			min_idx = j;
	}

	if (min_idx != i)
	{
		temp = array[min_idx];
		array[min_idx] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}
