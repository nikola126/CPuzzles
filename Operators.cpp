#include <stdio.h>

#define PRINT(int) printf("%d\n", int)

// Basic Arithmetic Operators
void operators_1()
{
    printf("Basic Arithmetic Operators\n");
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

// Assignment Operators
void operators_2()
{
    printf("Assignment Operators\n");
    int x = 2;
    int y, z;

    x *= 3 + 2;
    // x* = 5
    // x = x * 5
    // x = 2 * 5
    // x = 10
    printf("X = %d\n", x);

    x *= y = z = 4;
    // x = x * 4; y = 4; z = 4;
    // x = 10 * 4
    // x = 40
    printf("X = %d\n", x);

    x = y == z;
    // x = (4 == 4)
    // x = 1
    printf("X = %d\n", x);

    x == (y = z);
    // x == (4 = 4)
    // x == 1
    // 1 == 1
    // 1
    printf("X = %d\n", x);
}

// Logic and Increment Operators
void operators_3()
{
    printf("Logic and Increment Operators\n");
    int x, y, z;

    x = 2; y = 1; z = 0;

    x = x && y || z;
    // x = 2 && 1 || 0
    // x = 1 || 0
    // x = 1
    PRINT(x);

    // x || !y && z
    // 1 || 0 && 0
    // 1 && 0
    // 1
    PRINT(x || !y && z);

    x = y = 1;
    // x = 1;
    // y = 1;
    z = x++ - 1;
    // z = 1 - 1;
    // x = 2;
    // z = 0;
    PRINT(x); // 2
    PRINT(z); // 0

    z += -x++ + ++y;
    // z += -2 + (1+1); x = 3;
    // z += -2 + 2
    // z += 0
    // z = z + 0
    // z = 0
    PRINT(x); // 3
    PRINT(z); // 0

    z = x / ++x; // !!!
    // z = 3 / (3 + 1)
    // z = 4 / 4
    // z = 1
    PRINT(z); // 1
}

// Bitwise Operators
void operators_4()
{
    printf("Bitwise Operators\n");
    int x, y, z;

    x = 03; // 0011
    y = 02; // 0010
    z = 01; // 0001

    PRINT(x | y & z);
    // x OR y AND z
    // 0011 OR (0010 AND 0001)
    // 0011 OR 0000
    // 0011
    // 3

    PRINT(x | y & ~z);
    // x OR y AND NOT z
    // 0011 OR 0010 AND (NOT 0001)
    // 0011 OR 0010 AND 1110
    // 0011 OR 0010
    // 0011
    // 3

    PRINT(x ^ y & ~z);
    // x XOR y AND NOT z
    // 0011 XOR 0010 AND (NOT 0001)
    // 0011 XOR 0010 AND 1110
    // 0011 XOR 0010
    // 0001
    // 1

    PRINT(x & y && z);
    // x AND y LOGICAL AND z
    // 0011 AND 0010 LOGICAL AND 0001
    // 0010 LOGICAL AND 0001
    // 2 && 1
    // 1

    x = 1;  //0001
    y = -1; //(1...)1111
    z = 01; //0001

    PRINT(!x | x);
    // LOGICAL NOT 0001 OR 0001
    // 0000 OR 0001
    // 0001
    // 1

    PRINT(~x | x);
    // NOT 0001 OR 0001
    // 1110 OR 0001
    // 1111
    // 15
    // -1 (same as y)

    PRINT(x ^ x);
    // 0001 XOR 0001
    // 0000
    // 0

    x <<= 3;
    // 0001
    // 1000
    // 8
    PRINT(x);

    y <<= 3;
    // (1...)1111
    // (1...)0111
    // -8
    PRINT(y);

    y >>= 3;
    // (1...)0111
    // (1...)1110
    // -1
    PRINT(y);
}

int main()
{
    //operators_1();
    //operators_2();
    //operators_3();

    operators_4();
}
