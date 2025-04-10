#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array integers
 * @size: size of array
*/
void quick_sort(int *array, size_t size)
{
    int aux;
    size_t i, j, k;
    int pivot;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        pivot = array[size - 1];
        j = i;

        for (k = i; k < size - 1; k++)
        {
            if (array[k] <= pivot)
            {
                aux = array[j];
                array[j] = array[k];
                array[k] = aux;
                j++;
            }
        }

        aux = array[j];
        array[j] = array[size - 1];
        array[size - 1] = aux;

        if (i < j)
        {
            quick_sort(array, j);
            quick_sort(array + j + 1, size - j - 1);
        }
    }
}
