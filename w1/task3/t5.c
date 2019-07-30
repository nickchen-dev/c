#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 3.5
// Task 5 Write a C program that generates a random sequence
// of six numbers by using the rand function from the stdlib library.
// Your program should generate a different sequence each time
// the program is run.
// (You'll need to do a bit of additional research to
// and out how to use this library function !)

// link:
// https://stackoverflow.com/questions/16569239/how-to-use-function-srand-with-time-h

int main(int argc, char const *argv[])
{
    // You need to call srand() once,
    // to randomize the seed, and then call rand() in your loop:
    srand(time(NULL)); // randomize seed
    // srand(100);
    int number = 6;

    for (int i = 0; i < number; ++i)
    {
        printf("The number %d is %d\n", i + 1, rand());
    }
    return 0;

    // https://github.com/nickchen-dev/c
}
