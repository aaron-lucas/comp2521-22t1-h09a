#ifndef POINT_LIST_H
#define POINT_LIST_H
#include "point.h"

typedef struct pointList *PointList;

void append(PointList pl, struct point p);
#endif