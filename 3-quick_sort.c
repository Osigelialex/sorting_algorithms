#include "sort.h"

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
}
