#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

/**
 * Write a C program that reads a two-digit number and presents the number in English words.
 * The program should make use of switch statements to select the corresponding English word
 * associated with each digit of the number. For instance, the input of 68 should be printed as
 * "sixty eight" .
 */

char *convert(int number);
char *_0_9(int number);
char *_10_19(int number);
char *_20_90(int number);

int main()
{
    int number;
    char *result;

    // get from user input
    // printf("Enter a two-digit number: ");
    // scanf("%d", &number);
    // printf("the number in English words %s\n", convert(number));
    for (number = -5; number <= 110; ++number)
    {
        result = convert(number);
        printf("the number %d in English words %s\n", number, result);

        free(result);
        result = NULL;
    }
    return 0;
}

char *convert(int number)
{
    char *result = (char *)malloc(sizeof(char) * 20 + 1);
    assert(result);
    // char *result = "Not supported";
    if (number >= 100 || number < 0)
    {
        result = strcat(result, "Not supported");
    }
    else
    {
        if (number >= 0 && number <= 9)
        {
            result = strcat(result, _0_9(number));
        }
        else if (number >= 10 && number <= 19)
        {
            result = strcat(result, _10_19(number));
        }
        else
        {
            int digits, tenDigits;
            digits = number % 10;
            tenDigits = number / 10;

            result = strcat(result, _20_90(tenDigits));
            result = strcat(result, " ");
            result = strcat(result, _0_9(digits));
        }
    }

    return result;
}

char *_0_9(int number)
{
    char *result;
    switch (number)
    {
    case 0:
        result = "";
        break;
    case 1:
        result = "one";
        break;
    case 2:
        result = "two";
        break;
    case 3:
        result = "three";
        break;
    case 4:
        result = "four";
        break;
    case 5:
        result = "five";
        break;
    case 6:
        result = "six";
        break;
    case 7:
        result = "seven";
        break;
    case 8:
        result = "eight";
        break;
    case 9:
        result = "nine";
        break;
    default:
        result = "";
    }
    return result;
}

char *_10_19(int number)
{
    char *result;
    switch (number)
    {
    case 10:
        result = "ten";
        break;
    case 11:
        result = "eleven";
        break;
    case 12:
        result = "twelve";
        break;
    case 13:
        result = "thirteen";
        break;
    case 14:
        result = "fourteen";
        break;
    case 15:
        result = "fifteen";
        break;
    case 16:
        result = "sixteen";
        break;
    case 17:
        result = "seventeen";
        break;
    case 18:
        result = "eighteen";
        break;
    case 19:
        result = "nineteen";
        break;
    default:
        result = "";
    }
    return result;
}

char *_20_90(int number)
{
    char *result;
    switch (number)
    {
    case 2:
        result = "twenty";
        break;
    case 3:
        result = "thirty";
        break;
    case 4:
        result = "fourty";
        break;
    case 5:
        result = "fifty";
        break;
    case 6:
        result = "sixty";
        break;
    case 7:
        result = "seventy";
        break;
    case 8:
        result = "eighty";
        break;
    case 9:
        result = "ninety";
        break;
    default:
        result = "";
    }
    return result;
}