#include <stdlib.h>
#include <stdio.h>

int add(int x, int y) { 
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    return x / y;
}


int main(int argc, char *argv[]) {

    int (*operation)(int, int);     // Declare "operation" as a pointer to function with arguments (int, int) returning int
    int x, y;

    printf("Enter two numbers (x and y): ");
    scanf("%d %d", &x, &y);

    operation = add;
    printf("adding: %d\n", operation(x, y));

    operation = &subtract;
    printf("subtracting: %d\n", operation(x, y));

    operation = &(multiply);
    printf("multiplying: %d\n", operation(x, y));

    operation = divide;
    printf("dividing: %d\n", operation(x, y));

    return EXIT_SUCCESS;
}
