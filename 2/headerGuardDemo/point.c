#include <stdio.h>
#include "point.h"

void printCoords(struct point p) {
    printf("(%lf, %lf)\n", p.x, p.y);
}