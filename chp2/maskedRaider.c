#include <stdio.h>

int main()
{
    char maskedRaider[] = "Alive";
    char *jimmy = maskedRaider;
    printf("Masked raider is %s, Jimmy is %s\n", maskedRaider, jimmy);
    maskedRaider[0] = 'D';
    maskedRaider[1] = 'E';
    maskedRaider[2] = 'A';
    maskedRaider[3] = 'D';
    maskedRaider[4] = '!';
    printf("Masked raider is %s, Jimmy is %s\n", maskedRaider, jimmy);
    // this happens because jimmy is a pointer to maskedRaider, which is a mutable char array
    return 0;
}