#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef Node *List;

/* ----------------------------------------------------------------- */

int listLengthIter(List l) {
    int length = 0;
    for (Node *curr = l; curr != NULL; curr = curr->next) {
        length++;
    }
    return length;
}

int listLengthRec(List l) {
    if (l == NULL) {
        return 0;
    }

    return 1 + listLengthRec(l->next);
}

/* ----------------------------------------------------------------- */

int listCountOddsIter(List l) {
    int odds = 0;
    for (Node *curr = l; curr != NULL; curr = curr->next) {
        if (curr->data % 2 != 0) {
            odds++;
        }
    }

    return odds;

}

int listCountOddsRec(List l) {
    if (l == NULL) {
        return 0;
    }

//     if (l->data % 2 != 0) {
//         // Current node is odd
//         return 1 + listCountOddsRec(l->next);
//     } else {
//         // Current node is even
//         return 0 + listCountOddsRec(l->next);
//     }

    // (condition) ? (value if true) : (value if false)
    return ((l->data % 2 != 0) ? 1 : 0) + listCountOddsRec(l->next);
}

/* ----------------------------------------------------------------- */

bool listIsSortedIter(List l) {
    if (l == NULL || l->next == NULL) {
        return true;
    }

    for (Node *curr = l; curr->next != NULL; curr = curr->next) {
        if (curr->data > curr->next->data) {
            return false;
        }
    }

    return true;
}

bool listIsSortedRec(List l) {
    if (l == NULL || l->next == NULL) {
        return true;
    }

    if (l->data > l->next->data) {
        return false;
    }

    return listIsSortedRec(l->next);
}

/* ----------------------------------------------------------------- */

List listDelete(List l, int value) {
    if (l == NULL) {
        return NULL;
    }

    if (l->data == value) {
        Node *restOfList = l->next;
        free(l);
        return restOfList;
    }

    l->next = listDelete(l->next, value);
    return l;
}
