#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array integers
 * @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	int aux, temp, j, i;
	int low = 0, high = size - 1;

	if (!array || size < 2)
		return;

	while (low < high)
	{
		aux = array[high];
		i = low -1;

		for (j = low; j < high; j++)
		{
			if (array[j] < aux)
			{
				i++;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}

		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);

		if (i + 1 < high)
			high = i;
		else
			low = i + 2;
	}
}
