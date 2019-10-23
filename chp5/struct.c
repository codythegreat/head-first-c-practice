#include <stdio.h>

// note that if we add an extra value here later on
// we shouldn't need to change functions/parameters
struct fish { 
    const char *name;
    const char *species;
    int teeth;
    int age;
};

struct fish goldy = {"Goldy", "Gold Fish", 32, 2};

void printFish(struct fish f)
{
    printf("%s is a %s that has %i teeth and is %i years old.\n",
     f.name, f.species, f.teeth, f.age);
}

int main()
{
    printFish(goldy);
}