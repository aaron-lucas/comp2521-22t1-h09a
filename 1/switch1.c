#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    char ch = getchar();
    switch (ch) {
        case 'a': printf("eh? "); break;
        case 'e': printf("eee "); break;
        case 'i': printf("eye "); break;
        case 'o': printf("ohh "); break;
        case 'u': printf("you "); break;
    }

    printf("\n");

    return EXIT_SUCCESS;
}
