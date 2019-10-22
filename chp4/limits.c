#include <stdio.h>
#include <limits.h> // contains value for integer type numbers
#include <float.h> // contains value for float type numbers

int main()
{
    printf("The value of INT_MAX is %i\n", INT_MAX);
    printf("The value of INT_MIN is %i\n", INT_MIN);
    printf("An int takes %li bytes\n", sizeof(int));

    printf("The value of FLT_MAX is %f\n", FLT_MAX);
    printf("The value of FLT_MIN is %.50f\n", FLT_MIN);
    printf("A float takes %li bytes\n", sizeof(float));

    return 0;
}
