int a;                          // int
int b[10];                      // array of 10 ints
int *c;                         // pointer to int
int *d[10];                     // array of 10 int pointers
int (*e)[10];                   // pointer to array of 10 ints

int f(char *, double);          // function with arguments (char *, double) returning int
int *g(char *, double);         // function with arguments (char *, double) returning pointer to int
int (*h)(char *, double);       // pointer to a function with arguments (char *, double) returning int
