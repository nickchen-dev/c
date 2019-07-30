#include <stdio.h>

void func(void);

int main(int argc, char const *argv[])
{
    func();
    func();
    func();
    return 0;
}

void func(void)
{
    int x = 0;
    static int y = 0;
    ++x;
    ++y;
    printf("x = %d, y = %d\n", x, y);
}
