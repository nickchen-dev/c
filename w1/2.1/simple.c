/* simple.c: a simple C program */

#include <stdio.h>

int main(void)
{
	printf("Welcome to C programming!\n");
	return 0;
}

// https://superuser.com/questions/556140/on-a-linux-shell-what-is-echo-supposed-to-do
// On a linux shell, what is echo $? supposed to do?

// echo $? means status of your previous command

// how to process the input arguments from the command line

// int main(int argc, char const *argv[])
// {
// 	printf("number of arguments: %d\n", argc);
// 	// for (int i = 0; i < sizeof(argv) / sizeof(char); ++i)
// 	for (int i = 0; i < argc; ++i)
// 	{
// 		printf("argument no. %d, value is %s\n", i, argv[i]);
// 	}
// 	return 0;
// }
