#include <stdio.h>

enum boolean
{
    NO,
    YES
};
enum months
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main(int argc, char const *argv[])
{

    enum boolean truth = NO;
    // truth = YES;
    printf("The truth is %s\n", truth ? "Yes" : "No");

    enum months month = OCT;
    printf("month = %d\n", month);
    return 0;
}
