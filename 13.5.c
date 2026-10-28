#include <stdio.h>
#include <stdlib.h>   // for atoi

int main(int argc, char *argv[])
{
    int total = 0;

    // Start from 1 because argv[0] is the program name
    for (int i = 1; i < argc; i++)
    {
        total += atoi(argv[i]);   // convert string to int and add
    }

    printf("Total: %d\n", total);

    return 0;
}
