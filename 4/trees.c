#include <stdlib.h>
#include <stdio.h>
#include <math.h> // max(x, y)

typedef struct BSTNode *BSTree;

typedef struct BSTNode {
    int value;
    BSTree left;
    BSTree right;
} BSTNode;

int BSTreeNumNodes(BSTree t) {
    if (t == NULL) {
        return 0;
    }

    return 1 + BSTreeNumNodes(t->left) + BSTreeNumNodes(t->right);
}

int BSTreeHeight(BSTree t) {
    if (t == NULL) {
        return -1;
    }

    int leftHeight = BSTreeHeight(t->left);
    int rightHeight = BSTreeHeight(t->right);
    return 1 + max(leftHeight, rightHeight);
}

int BSTreeNodeLevel(BSTree t, int key) {
    if (t == NULL) {
        // Empty tree
        return -1;
    } else if (t->value == key) {
        // Found value we're looking for
        return 0;
    } if (key < t->value) {
        // Key is to the left
        int leftLevel = BSTreeNodeLevel(t->left, key);
        if (leftLevel == -1) {
            return -1;
        } else {
            return leftLevel + 1;
        }
    } else {
        // Key is to the right
        int rightLevel = BSTreeNodeLevel(t->right, key);
        return (rightLevel == -1) ? -1 : 1 + rightLevel;
    }
}

int BSTreeCountGreater(BSTree t, int key) {

}
