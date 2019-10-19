/*
 * Program to calculate the number of cards in a shoe.
 */

#include <stdio.h>

int main()
{
    int decks;
    puts("Enter a number of decks");
    scanf("%i", &decks);
    if (decks < 1) {
        puts("This is not a valid number of decks");
        return 1;
    }
    printf("There are %i cards", (decks*52));
    return 0;
}