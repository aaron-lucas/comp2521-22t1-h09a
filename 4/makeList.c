#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node *Node;
struct node {
    int value;
    Node next;
};

static Node createNode(int value);

int main(void) {
    Node n1 = createNode(3);
    n1->next = createNode(1);
    n1->next->next = createNode(4);

    printf("%d -> %d -> %d -> X\n", n1->value, n1->next->value, n1->next->next->value);
    free(n1->next->next);
    free(n1->next);
    free(n1);
}

static Node createNode(int value) {
    Node n = malloc(sizeof(Node));  // Should be sizeof(struct node) or sizeof(*n)
    assert(n != NULL);

    n->value = value;
    n->next = NULL;
    return n;
}
