#include <stdio.h>

#define MAX_NUMBER 20

// 3.1 Task 1
// Write a C program that asks users to enter their first name and last name.
// The program then displays the initial of the users based on the first letter
// of the first and last names. You may assume the maximum number of
// characters for each string is 20.

int main(int argc, char const *argv[])
{
    char firstName[MAX_NUMBER], lastName[MAX_NUMBER];
    printf("Please enter your first name: ");
    scanf("%s", firstName);
    printf("Please enter your last name: ");
    scanf("%s", lastName);

    printf("Your initial is %c %c\n", *firstName, *lastName);
    return 0;
}
