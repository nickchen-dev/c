#include <stdio.h>
#include <string.h>

typedef struct
{
    /* data */
    char *firstName;
    char *lastName;
} Name;

int compareName(Name name1, Name name2);

int main()
{
    Name name1, name2;
    name1.firstName = "first1";
    name1.lastName = "last1";

    name2.firstName = "first2";
    name2.lastName = "last2";

    int result = compareName(name1, name2);
    char *output;
    if (result < 0)
    {
        output = "name1 is less than name2\n";
    }
    else if (result == 0)
    {
        output = "name1 is equal to name2\n";
    }
    else
    {
        output = "name1 is greater than name2\n";
    }

    printf("result = %s\n", output);
    return 0;
}

int compareName(Name name1, Name name2)
{
    int result;
    result = strcmp(name1.firstName, name2.firstName) +
             strcmp(name1.lastName, name2.lastName);
    return result;
}