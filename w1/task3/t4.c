#include <stdio.h>

// 3.4
// Task 4 Write a C program that reads a number with three digits.
// The program then prints the number with its digits reversed.For instance,
// if the input is 123, the program should print 321.
// You should define an array to hold the digits of the number in the reversed order.

int main(int argc, char const *argv[])
{
    int number;
    int array[3] = {0};
    printf("Please enter a number with three digits: ");
    scanf("%d", &number);
    array[0] = number % 10;
    array[1] = number % 100 / 10;
    array[2] = number / 100;

    printf("The input is %d\n", number);
    printf("The output should be: ");
    for (int i = 0; i < sizeof(array) / sizeof(int); ++i)
    {
        printf("%d", array[i]);
    }
    printf("\n");
    return 0;
}
