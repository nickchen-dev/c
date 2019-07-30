#include <stdio.h>

// 3.2 Task 2 Write a C program that reads the radius of a circle.
// The program then computes and prints the circumference and the area of the circle,
// with two decimal places of precision.You should
// define the value of PI as a constant.

int main(int argc, char const *argv[])
{
    const double PI = 3.14;
    double radius, area, circumference;
    printf("Please enter the radius of a circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("the circumference of the circle is %.2f\n", circumference);
    printf("the area of the circle is %.2f\n", area);
    return 0;
}
