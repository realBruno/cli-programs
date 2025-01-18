#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *file;
    for (int i = 1; i < argc; i++)
        file = fopen(argv[i], "w");

    fclose(file);

    return 0;
}