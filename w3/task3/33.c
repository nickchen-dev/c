#include <stdio.h>

/**
 * Write a C program that computes the greatest common divisor (GCD) between two positive
 * integers. For instance, the GCD for integers 12 and 78 is 6. The program should implement
 * the Euclidean algorithm to nd the GCD.
 */

int computeGCD(int number1, int number2);

int main()
{
    // int number1, number2;
    // printf("Enter number1: ");
    // scanf("%d", &number1);
    // printf("Enter number2: ");
    // scanf("%d", &number2);

    printf("The greatest common divisor: %d\n", computeGCD(12, 78));
    return 0;
}

int computeGCD(int number1, int number2)
{
    if (number2 == 0)
    {
        return number1;
    }
    return computeGCD(number2, number1 % number2);
}
