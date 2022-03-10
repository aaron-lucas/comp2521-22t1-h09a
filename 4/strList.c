#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node *Node;
struct node {
    char *word;
    Node next;
};

static Node createNode(char *word);

int main(void) {
    // assume words are no longer than 99 characters
    char buffer[100];

    scanf("%s", buffer);
    Node n1 = createNode(buffer);
    scanf("%s", buffer);
    n1->next = createNode(buffer);
    scanf("%s", buffer);
    n1->next->next = createNode(buffer);

    printf("\"%s\" -> \"%s\" -> \"%s\" -> X\n",
            n1->word, n1->next->word, n1->next->next->word);

    free(n1->next->next);
    free(n1->next);
    free(n1);
}


static Node createNode(char *word) {
    Node n = malloc(sizeof(struct node));
    assert(n != NULL);

    n->word = word;  // All nodes point to the same string! Should create a new string with strdup
    n->next = NULL;
    return n;
}
