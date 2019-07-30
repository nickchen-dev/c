#include <stdio.h>
#define MAX_LENGTH 9

void printArray(int array[], int size);
void printStrArray(char **array, int size);

int main(int argc, char const *argv[])
{
    int a[10] = {0};
    // printArray(a, sizeof(a) / sizeof(a[0]));
    // for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
    // {
    //     printf("the index %d number is %d\n", i + 1, a[i]);
    // }

    // array not initialized, the value in the array is randomized
    // the value in the memory space is unpredictable
    int b[10];
    b[2] = 3;
    printArray(b, sizeof(b) / sizeof(b[0]));

    char *strArray[] = {"hello",
                        "world",
                        "fit2100", "monash"};
    // sizeof(*strArray) / sizeof(strArray[0])
    printStrArray(strArray, 4);
    return 0;
}

void printArray(int *array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("the index %d number is %d\n", i + 1, array[i]);
    }
}

void printStrArray(char **array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        // printf("the index %d number is %s\n", i, *(array + i));
        printf("the index %d number is %s\n", i, array[i]);
    }
}