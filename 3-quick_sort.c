#include <stdio.h>
#include <stdlib.h>

/**
 * partition_array - partition the array using pivot
 * @array: the array to sort
 * @low: starting index
 * @high: ending index
 * Return: pivot index
 */
int partition_array(int *array, int low, int high)
{
    int pivot = array[high];
    int i = low - 1;
    int temp, j;

    for (j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;

    return (i + 1);
}

/**
 * quick_sort_recursive - recursively sort the array
 * @array: the array to sort
 * @low: starting index
 * @high: ending index
 */
void quick_sort_recursive(int *array, int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition_array(array, low, high);
        quick_sort_recursive(array, low, pivot_index - 1);
        quick_sort_recursive(array, pivot_index + 1, high);
    }
}

/**
 * quick_sort - sort an array of integers
 * @array: the array to sort
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
    quick_sort_recursive(array, 0, size - 1);
}
