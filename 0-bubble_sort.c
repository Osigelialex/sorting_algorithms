#include "sort.h"

/*
 * bubble_sort - function to perform bubble sort an array
 * @array: Integer list
 * @size: length of array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
			if (arrray[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;

				print_array(array, size);
			}
	}
}
