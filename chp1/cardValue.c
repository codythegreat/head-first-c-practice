// Simple program to interpret and print the value of a playing card
// I'm on page  
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cardName[3];
    int count = 0;
    while (cardName[0] != 'X') {
        puts("Enter the card name:");
        scanf("%2s", cardName);
        int val = 0;
        switch(cardName[0]) {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                return 0;
            default:
                val = atoi(cardName);
                    if ((val < 1) || (val > 10)) {
                    puts("You have entered an invalid value; please try again.");
                    continue;
                }
                break;
        }
        if ((val > 2) && (val < 7)) {
            count++;
        } else if (val == 10){
            count--;
        }
        printf("current count: %i\n", count);
    }
    return 0;
}