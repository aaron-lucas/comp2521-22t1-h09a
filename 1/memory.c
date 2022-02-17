#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int x, y;
    char *c, *d, *e, *f;

    x = y = 2;
    c = d = "abc";
    e = "xyz"; f = "xyz";

    x++;
    *c = 'A';

    return EXIT_SUCCESS;
}
