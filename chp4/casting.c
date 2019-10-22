#include <stdio.h>

int main()
{
    int x = 7;
    int y = 2;
    float z = x/y;
    printf("Value of z: %f\n", z);
    z = (float)x / (float)y;
    printf("Value of z after casting: %f\n", z);
    z = (float)x / y;
    printf("Value of z after casting only x: %f\n", z); // casting will happen to y automatically

    return 0;
}