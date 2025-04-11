#include "sort.h"

/**
 * quicksort_recursivo - recursively applies the quick sort algorithm
 * @array: array of integers to sort
 * @low: starting index of the sub-array
 * @high: ending index of the sub-array
 * @size: size of the full array (for printing)
 */
void quicksort_recursivo(int *array, int low, int high, size_t size)
{
    int pivot, i, j, temp;

    if (low < high)
    {
        pivot = array[high];
        i = low;


        for (j = low; j < high; j++)
        {
            if (array[j] < pivot)
            {
                if (i != j)
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
                i++;
            }
        }


        if (i != high)
        {
            temp = array[i];
            array[i] = array[high];
            array[high] = temp;
        }


        print_array(array, size);


        quicksort_recursivo(array, low, i - 1, size);
        quicksort_recursivo(array, i + 1, high, size);
    }
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quicksort_recursivo(array, 0, size - 1, size);
}
