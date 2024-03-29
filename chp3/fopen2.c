#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char line[80];
    FILE *in = fopen("dataset1.csv", "r");
    FILE *file1 = fopen("dataset2.csv", "w");
    FILE *file2 = fopen("dataset3.csv", "w");
    FILE *file3 = fopen("dataset4.csv", "w");
    while (fscanf(in, "%79[^\n]\n", line)==1) {
        if (strstr(line, "UFO")) {
            fprintf(file1, "%s\n", line);
        } else if (strstr(line, "Disappearance")) {
            fprintf(file2, "%s\n", line);
        } else {
            fprintf(file3, "%s\n", line);
    }
    fclose(file1);
    fclose(file2);
    fclose(file3);
    return 0;
}