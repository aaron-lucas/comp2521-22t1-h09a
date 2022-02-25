// Compilation fails if there's no header guard here
// Try it out: gcc -o pointMain pointMain.c point.c pointList.c
#ifndef POINT_H
#define POINT_H

struct point {
    double x;
    double y;
};

void printCoords(struct point p);

#endif 
