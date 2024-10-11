#include <stdio.h>

#define xorswap(a,b)        ((a) ^= (b)), (b) ^= (a), (a) ^= (b))

int main()
{
    int x = 231;
    int y = 42342;

    printf("x = %d  y = %d\n", x, y);

    x ^= y;
    y ^= x;
    x ^= y;

    printf("x = %d  y = %d\n", x, y);
}

