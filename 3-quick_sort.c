#include "sort.h"

<<<<<<< HEAD
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
=======
int partition(int *array, size)
{
	int pivot, end, start;
	pivot = array[size--];
	start = lb;
	end = ub;

	while (start < end)
	{
		while (array[start] <= pivot)
			start++;
		while (array[end] > pivot)
			end++;
		if (start < end)
			swap(array[start], array[end]);

		swap(array[lb], array[end]);
		return (end);
	
}
/**
 * quick_sort - Function to sort array list
 * @array: Items to sort
 * @size: Length of array to sort
 */
void quick_sort(int *array, size_t size);
{
	if (lb < ub)
	{
		int loc = partition(array, lb, ub);
		quick_sort(array, size--);
		quick_sort(array, size);
	}
>>>>>>> a86a0655d979191119ff9ec1ec236a52dbbd6d7b
}
