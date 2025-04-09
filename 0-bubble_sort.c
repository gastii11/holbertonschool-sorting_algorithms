#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - Ordena un arreglo de enteros en orden ascendente
 * utilizando el algoritmo Bubble Sort.
 * @array: puntero al arreglo de enteros.
 * @size: tamaño del arreglo.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
			}
		}
	}
}
