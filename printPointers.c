#include <stdio.h>

void printStr(char s[])
{
    printf("%li is the size.\n", sizeof(s)); // only 4/8 bytes because this acts as a pointer to the first character in the array
}

int main()
{
    int x = 15;
    char str[] = "Hello World!";
    printf("You can print addresses like so : %p\n", &x);
    printf("an array of characters will print the address of the first character : %p\n", str); // you don't have to use an & when pointing to an array of characters
    printf("Notice that you can also print the size of a string: %li\n", sizeof(str));
    puts("below we'll pass the string into a function and print the size, notice below the difference.");
    printStr(str);

    int contestants[] = {1, 2, 3};
    int *choice = contestants;
    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;
    printf("I'm goint to pick contestant number %i\n", contestants[2]);
    // contestants[2] -> *choice -> contestants (contestants[0] to be more specific) -> 2
    return 0;
}