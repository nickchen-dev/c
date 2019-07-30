#include <stdio.h>

// 3.3 Task 3 Write a C program that reads two integer values and
// performs the four basic arithmetic oper - ations on them :
// addition, subtraction, multiplication, and division.
// Each of these operations should be implemented as a separate function.

// function declaration
double addition(int number1, int number2);
double subtraction(int number1, int number2);
double multiplication(int number1, int number2);
double division(int number1, int number2);

int main(int argc, char const *argv[])
{
    int number1, number2;
    printf("Please enter 1st number: ");
    scanf("%d", &number1);
    printf("Please enter 2nd number: ");
    scanf("%d", &number2);

    printf("The result of addition: %.2lf\n", addition(number1, number2));
    printf("The result of subtraction: %.2lf\n", subtraction(number1, number2));
    printf("The result of multiplication: %.2lf\n", multiplication(number1, number2));
    printf("The result of division: %.2lf\n", division(number1, number2));
    return 0;
}

// function definition
double addition(int number1, int number2) {
    return number1 + number2;
}

double subtraction(int number1, int number2) {
    return number1 - number2;
}

double multiplication(int number1, int number2) {
    return number1 * number2;
}

double division(int number1, int number2) {
    return number1 / number2;
}
