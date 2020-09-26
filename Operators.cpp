#include <stdio.h>

#define PRINT(int) printf("%d\n", int)
#define PRINT3(x,y,z) printf("x=%d\ty=%d\tz=%d\n",x,y,z)

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
    // -12 % -6 / 5
    // 0 / 5
    // 0
    printf("%d\n", x);

    x = 7 + 6 % 5 / 2;
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
    // x == 4
    // 1 == 4
    // 0 (x = 4)
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

// Relational and Conditional Operators
void operators_5()
{
    printf("Relational and Conditional Operators\n");
    int x = 1, y = 1, z = 1;

    x += y += z;
    // x += (y = y + z) (z = 1)
    // x += (y = 1 + 1) (y = 2)
    // x += 2
    // x = 1 + 2
    // x = 3            (x = 3)
    
    // (x = 3) (y = 2) (z = 1)
    // 3 < 2 ? 2 : 3
    PRINT(x < y ? y : x); // 3

    // (x = 3) (y = 2) (z = 1)
    // 3 < 2? 3 : 2
    // 2 (y++)
    // (x = 3) (y = 3) (z = 1)
    PRINT(x < y ? x++ : y++); // 2
    PRINT(x); // 3
    PRINT(y); // 3

    // (x = 3) (y = 3) (z = 1)
    // z += (x < y ? x++ : y++)
    // z += (3 < 3 ? x++ : y++)
    // z += (y++)
    // z = z + y
    // z = 1 + 3
    // z = 4
    // y = 4
    PRINT(z += x < y ? x++ : y++); // 4
    PRINT(y); // 4
    PRINT(z); // 4

    x = 3; y = z = 4;
    // (x = 3) (y = 4) (z = 4)
    // (z >= y >= x)
    // 4 >= 4 >= 3
    // 1 >= 3
    // 0
    // 0 ? 1 : 0
    PRINT((z >= y >= x) ? 1 : 0); // 0 !!!

    // (z >= y && y >= x)
    // 4 >= 4 && 4 >= 3
    // 1 && 1
    // 1
    PRINT(z >= y && y >= x); // 1
}

// Operator Precedence and Evaluation
void operators_6()
{
    printf("Operator Precedence and Evaluation\n");
    int x, y, z;
    x = y = z = 1;

    ++x || ++y && ++z;
    // (x+1) OR y AND z
    // 2 OR y AND z
    // 1
    PRINT3(x, y, z); // 2 1 1 (after OR is ignored, as it doesn't matter)

    x = y = z = 1;
    ++x && ++y || ++z;
    // (x+1) AND y OR z (x = 2)
    // 2 AND y+1 OR z   (y = 2)
    // 1 OR ++z         (after OR is ignored, as it doesn't matter)
    // 1
    PRINT3(x, y, z); // 2 2 1

    x = y = z = 1;
    ++x && ++y && ++z;
    // (x+1) AND y AND z (x = 2)
    // 2 AND (y+1) AND z (y = 2)
    // 2 AND 2 AND z
    // 1 AND z
    // 1 AND (z+1)       (z = 2)
    // 1
    PRINT3(x, y, z); // 2 2 2

    x = y = z = -1;
    ++x && ++y || ++z;
    // (x+1) AND y OR z     (x = 0)
    // 0 AND (y+1) OR z     (AND is evaluated)
    // 0 OR z
    // 0 OR (z+1)           (z = 0)
    // 0
    PRINT3(x, y, z); // 0 -1 0 ???

    x = y = z = -1;
    ++x || ++y && ++z;
    // x OR y AND z
    // (x+1) OR y AND z     (x = 0)
    // 0 OR (y+1) AND z     (y = 0)
    // 0 OR 0 AND z         (AND is evaluated)
    // 0 OR 0
    // 0
    PRINT3(x, y, z); // 0 0 -1

    x = y = z = -1;
    ++x && ++y && ++z;
    // (x+1) AND y AND z    (x = 0)
    // 0 AND y AND z        (AND is evaluated)
    // 0 AND z              (AND is evaluated)
    // 0
    PRINT3(x, y, z); // 0 -1 -1
}

int main()
{
    printf("Part 1 - Operators\n");
    operators_1();
    operators_2();
    operators_3();

    operators_4();
    operators_5();
    operators_6();
}
