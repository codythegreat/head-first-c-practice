#include <stdio.h>

typedef struct {
    char *name;
    int age;
} Turtle;

void happyBirthday(Turtle *a)
{
    // two different ways of accessing a pointer to a struct
    (*a).age += 2;
    a->age = a->age - 1;
    printf("Happy %ith birthday %s!\n", a->age, a->name);
}

int main()
{
    Turtle yurtle = {"Yurtle", 77};
    happyBirthday(&yurtle);
}