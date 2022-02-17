#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    // for (initilisation; condition; update) ...
    for (int ch = getchar(); ch != EOF; ch = getchar()) {
        putchar(ch);
    }

    return EXIT_SUCCESS;
}
