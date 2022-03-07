#include <stdlib.h>
#include <stdio.h>

#define N 3

static void printPermutation(char *items[N], int pos[N]);

int main(int argc, char *argv[]) {

    char *items[N] = { "cat", "dog", "mouse" };
    int pos[N] = { 2, 3, 1 };

    printPermutation(items, pos);

    return EXIT_SUCCESS;
}

static void printPermutation(char *items[N], int pos[N]) {
    // for (int i = 1; i <= N; i++) {
    //     for (int j = 0; j < N; j++) {
    //         if (pos[j] == i) {
    //             printf("%s\n", items[j]);
    //         }
    //     }
    // }

    char *order[N];
    for (int i = 0; i < N; i++) {
        order[pos[i] - 1] = items[i];
    }

    for (int j = 0; j < N; j++) {
        printf("%s\n", order[j]);
    }
}
