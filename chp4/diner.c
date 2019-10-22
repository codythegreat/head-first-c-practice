#include <stdio.h>

float total = 0.0;
short count = 0;
float taxPercent = 6; // book says short, but I think that float is more appropriate here

float addWithTax(float f)
{
    float taxRate = 1 + taxPercent / 100;
    total = total + (f * taxRate);
    count++;
    return total;
}

int main()
{
    float val;
    printf("Price of item: ");
    while (scanf("%f", &val)==1) {
        printf("Total so far: %.2f\n", addWithTax(val));
        printf("Price of item: ");
    }
    printf("\nFinal Total: %.2f\n", total);
    printf("Number of items: %hi\n", count);
    return 0;
}