#include <stdio.h>

int main()
{
    FILE *in_file = fopen("input.txt", "r"); // r denotes that we are reading a file
    FILE *out_file = fopen("output.txt", "w"); // w denotes that we are writing to a file
    // alternatively you can also use "a" to append to a file

    char sentence[80];
    fprintf(out_file, "Hello World!\n");
    fscanf(in_file, "%79[^\n]\n", sentence);

    fclose(in_file);
    fclose(out_file);

    return 0;

}