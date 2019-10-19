#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "Rotten Apple",
    "Nutshell",
    "I stay Away",
    "No Excuses",
    "Whale & Wasp",
};

void findTrack(char searchStr[])
{
    int i;
    for (i = 0; i < 5; i++) {
        printf("searing for %s in track %i\n", searchStr, i+1);
        if (strstr(tracks[i], searchStr)!=NULL) {
            printf("Track %i: %s\n", i+1, tracks[i]);
            continue;
        }
        puts("nothing found...");
    }
}

int main()
{
    char searchStr[80];
    printf("Enter your search query: ");
    fgets(searchStr, 80, stdin);
    char *p = strchr(searchStr, '\n');
    if (p!=NULL) *p='\0';
    findTrack(searchStr);
    return 0;
}