// CPuzzles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int x;

    x = -3 + 4 * 5 - 6;
    // -3 + 20 - 6
    // 17 - 6
    // 11
    printf("%d\n", x);

    x = 3 + 4 % 5 - 6;
    // 3 + 4 - 6
    // 1
    printf("%d\n", x);

    x = -3 * 4 % -6 / 5;
    // -12 % -1
    // 0
    printf("%d\n", x);

    x = (7 + 6) % 5 / 2;
    // 13 % 5 / 2
    // 3 / 2
    // 1
    printf("%d\n", x);
}
