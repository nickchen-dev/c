#include <stdio.h>

/**
 * Write a function in C that accepts an array of integers and the length of the array as arguments.
 * The function should then find the smallest element in the given array by returning a pointer
 * to the position of the smallest element. The function prototype is given as follows:
 */

int *find_smallest(int array[], int size);

int main()
{
    int array[] = {1, 3, 5, 7, -9, 11, 99, -99, 33, 22};
    int *smallest;
    int size = sizeof(array) / sizeof(int);
    printf("size = %d\n", size);
    smallest = find_smallest(array, size);
    if (smallest != NULL)
    {
        printf("The smallest element in the array is %d\n", *smallest);
    }
    return 0;
}

int *find_smallest(int array[], int size)
{
    int *smallest = NULL;
    if (size > 0)
    {
        // assigned the first element to result
        int result = *array;
        // assigned the address of the first element to smallest
        smallest = array;
        int i;
        for (i = 1; i < size; ++i)
        {
            if (result > *(array + i))
            {
                result = *(array + i);
                smallest = array + i;
            }
        }
    }
    return smallest;
}
