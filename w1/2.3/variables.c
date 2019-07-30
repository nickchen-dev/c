#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2.3 Variables in C
// In C, variables must be declared before they are used.
// The common practice is to perform the variable declaration
// at the beginning of each function before any executable statements.
// (This is however not a rule that you must follow)

int main(int argc, char const *argv[])
{
    int i = 0, j = 1, k = 2;
    float pi = 3.14159265357;
    double e = 1.0e-32;
    char c = 'c';
    char newline = '\n';

    i = 5;
    float f = i;
    j = (int)f;

    char str[] = "abcdef"; // 6 characters
    char str1[] = {'a', 'b', 'c', '\0', 'd', 'e', 'f'};
    printf("The size of %s is %d\n", str, sizeof(str));
    printf("The number of characters of %s is %d\n", str, strlen(str));

    printf("The size of %s is %d\n", str1, sizeof(str1));
    printf("The number of characters of %s is %d\n", str1, strlen(str1));

    return 0;
}

// 2.4 https://www.geeksforgeeks.org/data-types-in-c/
