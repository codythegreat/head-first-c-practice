#include <stdio.h>

typedef enum {
    COUNT, POUNDS, PINTS
} unitOfMeasure;

typedef union {
    short count;
    float weight;
    float volumne;
} quantity;

typedef struct {
    const char *name;
    const char *country;
    quantity amount;
    unitOfMeasure units;
} fruitOrder;

void display(fruitOrder order)
{
    printf("This order contains ");

    if (order.units == PINTS) {
        printf("%2.2f pints of %s\n", order.amount.volumne, order.name);
    } else if (order.units == POUNDS) {
        printf("%2.2f lbs of %s\n", order.amount.weight, order.name);
    } else {
        printf("%i %s\n", order.amount.count, order.name);
    }
}

int main()
{
    fruitOrder apples = {"apples", "England", .amount.count=144, COUNT};
    fruitOrder strawberries = {"strawberries", "Spain", .amount.weight=17.6, POUNDS};
    fruitOrder oj = {"orange juice", "USA", .amount.volumne=10.5, PINTS};
    display(apples);
    display(strawberries);
    display(oj);
    return 0;
}