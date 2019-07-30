#include <stdio.h>

#define MAX_LENGTH 9

// 2.2 Directives in C
// Before the compilation, C programs are rst edited by a preprocessor.
// Directives (always begin with the # symbol) are the commands intended
// for the preprocessor.

// In addition to the #include statement that we have seen,
// constants in C programs can be defined with a specific
// value using the directive #define.

// pre-processing phrase
// gcc -E directive.c -o directive.i

int main(int argc, char const *argv[])
{
    int number = MAX_LENGTH;
    MAX_LENGTH;
    MAX_LENGTH;
    MAX_LENGTH;
    MAX_LENGTH;

    for (int i = 1; i <= MAX_LENGTH; ++i)
    {
        printf("the value of i is %d\n", i);
    }
    printf("\n");
    return 0;
}
