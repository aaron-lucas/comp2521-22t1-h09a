#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct list {
    struct node *head;
};

void listDelete(struct list *l, int value);

int main(int argc, char *argv[]) {

    return EXIT_SUCCESS;
}

// listDelete(1 -> 2 -> 3 -> X, 1) = 2 -> 3 -> X
// listDelete(1 -> 2 -> 3 -> X, 2) = 1 -> 3 -> X
// listDelete(1 -> 2 -> 3 -> X, 3) = 1 -> 2 -> X
void listDelete(struct list *l, int value) {
    if (l->head == NULL) {
        // List is empty
        return;
    }

    if (l->head->value == value) {
        // Delete first item
        struct node *toDelete = l->head;
        l->head = l->head->next;
        free(toDelete);
    } else {
        struct node *curr = l->head;
        while (curr->next != NULL) {
            if (curr->next->value == value) {
                // Found node in the middle or end
                struct node *toDelete = curr->next;
                curr->next = curr->next->next;
                free(toDelete);
                // break;
                return;
            }
            curr = curr->next;
        }
    }
}
