#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: The minimum integer value (inclusive).
 * @max: The maximum integer value (inclusive).
 *
 * Return: A pointer to the newly created array, or NULL if malloc fails or if min > max.
 */
int *array_range(int min, int max)
{
    int *arr, i, size;
    
    if (min > max)
    {
        return (NULL);
    }
    
    size = max - min + 1;
    arr = malloc(sizeof(int) * size);
    
    if (arr == NULL)
    {
        return (NULL);
    }
    
    for (i = 0; i < size; i++, min++)
    {
        arr[i] = min;
    }
    
    return (arr);
}
