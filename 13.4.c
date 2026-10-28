#include <stdio.h>

int main(int argc, char *argv[])
{
    // Start from the last argument and go backwards
    for (int i = argc - 1; i > 0; i--)
    {
        printf("%s", argv[i]);

        // Print space between words (but not after the last one)
        if (i > 1)
            printf(" ");
    }

    printf("\n");
    return 0;
}
