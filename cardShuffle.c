#include <stdio.h>

int main() 
{
    char cards[] = "JQK"; // if we use char *cards here the value is assigned to read only memory. We have to use an array
    const char *unused = "unused string"; // this is how you should define read-only string variables
    char card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = card;
    puts(cards);
    return 0;
}