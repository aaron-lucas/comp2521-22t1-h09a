#include <stdlib.h>
#include <stdio.h>

#include "List.h"

struct Node {
    int value;
    List next;
};

static List createListNode(int value);
static List getLargestElement(List l);
static List removeElement(List l, List elem);

// Create a linked list from an array of values, maintaining the same order as
// in the array.
List ListFromArray(int values[], int size) {
    List l = NULL;
    List tail = NULL;
    for (int i = 0; i < size; i++) {
        List node = createListNode(values[i]);
        if (l == NULL) {
            l = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    return l;
}

// Print out all values in a list.
// E.g. A list containing numbers 1, 2 and 3 will print:
// 1 -> 2 -> 3 -> X
void ListPrint(List l) {
    if (l == NULL) {
        printf("X\n");
    } else {
        printf("%d -> ", l->value);
        ListPrint(l->next);
    }
}

// Free all memory associated with a list.
void ListFree(List l) {
    if (l != NULL) {
        ListFree(l->next);
        free(l);
    }
}

// Sort the values in a list using the selection sort algorithm.
//
// The nodes from the original list are re-ordered into the sorted list which is
// returned, therefore the original list cannot be used after calling this
// function.
List ListSelectionSort(List l) {
    List sorted = NULL;
    List unsorted = l;

    while (unsorted != NULL) {
        // Find largest element
        List largest = getLargestElement(unsorted);

        // Remove from unsorted component
        unsorted = removeElement(unsorted, largest);

        // Insert into sorted component
        largest->next = sorted;
        sorted = largest;
    }

    return sorted;
}

static List getLargestElement(List l) {
    List largest = l;
    for (List curr = l; curr != NULL; curr = curr->next) {
        if (curr->value > largest->value) {
            largest = curr;
        }
    }

    return largest;
}

static List removeElement(List l, List elem) {
    if (l == elem) {
        return l->next;
    } else {
        l->next = removeElement(l->next, elem);
        return l;
    }
}

// Create a list node with a given value.
static List createListNode(int value) {
    List l = malloc(sizeof(struct Node));
    if (l == NULL) {
        fprintf(stderr, "Unable to allocate memory\n");
        exit(1);
    }

    l->value = value;

    return l;
}

