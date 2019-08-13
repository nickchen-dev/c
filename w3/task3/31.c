#include <stdio.h>

/**
 * Write a C program that converts the 24-hour time format into the 12-hour time format. The
 * program should first prompt for a time in the 24-hour format, and then display the equivalent
 * 12-hour format. For instance, if the input is 13:15, the program should print 1:15 PM.
 */
int main() {
    int hours, minutes;
    char *suffix = "AM";
    printf("Please input the time: ");
    scanf("%d:%d", &hours, &minutes);

    if (hours >= 13) {
        hours -= 12;
        suffix = "PM";
    }

    printf("The time is %d:%d %s\n", hours, minutes, suffix);
    return 0;
}