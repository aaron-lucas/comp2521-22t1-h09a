#include <stdlib.h>
#include <stdio.h>

#include "List.h"

#define NUM_VALUES 5

int main(int argc, char *argv[]) {
    int values[NUM_VALUES] = {4, 3, 6, 8, 2};

    List l = ListFromArray(values, NUM_VALUES);

    printf("Before:\n");
    ListPrint(l);

    List sorted = ListSelectionSort(l);

    printf("After:\n");
    ListPrint(sorted);

    ListFree(l);

    return EXIT_SUCCESS;
}

