#include <stdio.h>

/**
 * Write a C program that reads a two-digit number and presents the number in English words.
 * The program should make use of switch statements to select the corresponding English word
 * associated with each digit of the number. For instance, the input of 68 should be printed as
 * "sixty eight" .
 */

char *convert(int number);

int main()
{
    int number;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    printf("the number in English words %s\n", convert(number));
    return 0;
}

char *convert(int number)
{
    char *result;
    int digits, tenDigits;
    digits = number % 10;
    tenDigits = number / 10;

    char *digitsList[] = {
        "",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "ninteen",
        "twenty"
    };

    if (number >= 0 && number <= 20)
    {
        result = digitsList[number];
        // switch (digits)
        // {
        // case:
        //     result = "
        //     "
        //     break;
        // }
    }
    else
    {
    }
    // switch ()
    // {
    // }

    return result;
}