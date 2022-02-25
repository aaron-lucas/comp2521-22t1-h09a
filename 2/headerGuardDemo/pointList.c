#include "point.h"

typedef struct pointListNode {
    struct point p;
    struct pointListNode *next;
} PointListNode;