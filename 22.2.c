#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;

    fp = fopen(argv[1], "r");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(toupper(ch));
    }

    fclose(fp);
    return 0;
}
