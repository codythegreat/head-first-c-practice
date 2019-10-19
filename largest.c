// finds the largest of two integers
#include <stdio.h>

int larger(int a, int b)
{
    if (a > b) {
        return a;
    }
    return b;
}

int main() 
{
    int greatest = larger(100, 1000);
    printf("%i is the greatest of the two numbers.\n", greatest);
    return 0;
}