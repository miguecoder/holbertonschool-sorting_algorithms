#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: array of integers
 * @size: size of array.
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, count = 0;
	int prev_tmp = 0, min = 0, min_tmp = 0, f_swap = 0;

	if (size <= 0 || !array)
	{
		return;
	}

	min_tmp = array[0];
	prev_tmp = min_tmp;

	while (array[i])
	{
		if (i + 1 == size)
		{
			if (f_swap == 0)
				min = count;
			array[min] = prev_tmp;
			array[count] = min_tmp;
			if (f_swap > 0)
			{
				print_array(array, size);
				f_swap = 0;
			}
			if ((count == size - 2 && f_swap == 0) || count == size - 2)
				return;
			count++;
			i = count;
			min_tmp = array[count];
			prev_tmp = min_tmp;
		}
		if (min_tmp > array[i + 1])
		{
			f_swap = 1;
			min_tmp = array[i + 1];
			min = i + 1;
		}
		i++;
	}
}
