#include "sort.h"
/**
* swap - Function
* @a: number in position i
* @b: NUmber in position j
* @size: size of array
* @array: array to sort.
*/
void swap(int *a, int *b, size_t size, int *array)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	print_array(array, size);
}

/**
* division - Function
* @array: this is the array to sort
* @s: NUmber to left
* @last: number to right
* @size: size of array
* Return: index of piv
*/
int division(int *array, int s, int last, size_t size)
{
	int piv = array[last], i = 0, j = 0;

	i = s - 1;

	for (j = s; j <= last; j++)
	{
		if (array[j] < piv)
		{
			i++;
			if (i != j && i >= 0)
			{
				swap(&array[i], &array[j], size, array);
			}
		}
	}
	if (array[last != array[i + 1]])
	{
		swap(&array[i + 1], &array[last], size, array);
	}
	return (i + 1);

}
/**
* qs - Function
* @array: this is the array to sort
* @s: NUmber to left
* @last: number to right
* @size: size of array
*/
void qs(int *array, int s, int last, size_t size)
{
	int piv = 0;

	if (last > s)
	{
		piv = division(array, s, last, size);
		qs(array, s, piv - 1, size);
		qs(array, piv + 1, last, size);
	}
}

/**
 * quick_sort - function that sorts an array of integers in
 * ascending order using the quicksort sort algorithm
 * @array: array of integers
 * @size: size of array.
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}
