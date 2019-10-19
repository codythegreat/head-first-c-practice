#include <stdio.h>

void skipChars(char *msg)
{
    puts(msg+6);
}

int main() 
{
    int dose[] = {1, 2, 3, 1000};
    printf("1st dose: %i mg\n", dose[0]);
    printf("1st dose: %i mg\n", *dose);
    // These two statements are, in general, equivalent.
    // You can perform math on pointers to get the other values.
    printf("2nd dose: %i mg\n", dose[1]);
    printf("2nd dose: %i mg\n", *(dose+1));
    printf("4th dose: %i mg\n", 3[dose]); // dose[3] == *(dose + 3) || *(3 + dose) == 3[dose]
    // so the index is actually a reference to *dose with the number inside the brackets added
    char *msgFromAmy = "Don't call me";
    skipChars(msgFromAmy);

    char name[40];
    printf("Enter your name: ");
    scanf("%39s", name); // accepts a char pointer and an array, we use the address of the variable to update the array.
    int age;
    printf("Enter your age: ");
    scanf("%i", &age); // to assign a number you need to use a pointer to the variable to be assigned.
    char make[40];
    char model[40];
    printf("Enter your vehicle make and model: ");
    scanf("%39s %39s", make, model); 
    printf("%s who is %i is the proud owner of a %s %s\n", name, age, make, model);
    // note that while it is possible to use %s in scanf we don't because...
    // if the user enters too many characters it will cause buffer overflows.

    // similar to scanf you can also use fgets() to parse user input:
    char food[5];
    printf("Enter your favorite food: ");
    fgets(food, sizeof(food), stdin); // takes 1 - pointer to a buffer, 2 - max size of string with \0 included, 3 - stdin (keyboard)
    // if food was a pointer, you'd need to give an explicit length as sizeof(pointer) will return the size of the pointer

    return 0;
}