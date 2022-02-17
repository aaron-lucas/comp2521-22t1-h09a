#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    char ch = getchar();
    switch (ch) {
        case 'a': printf("eh? ");
        case 'e': printf("eee ");
        case 'i': printf("eye ");
        case 'o': printf("ohh ");
        case 'u': printf("you ");
    }

    printf("\n");

    return EXIT_SUCCESS;
}
