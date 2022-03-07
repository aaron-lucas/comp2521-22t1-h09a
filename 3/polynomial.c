#include <stdlib.h>
#include <stdio.h>

static double evaluatePolynomial(double *coeffs, int order, double x);

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Usage: ./polynomial x a0 a1 ... an\n");
        exit(1);
    }

    // Parse command line args
    int order = argc - 3;
    double *coeffs = malloc((order + 1) * sizeof(double));
    double x = strtod(argv[1], NULL);

    printf("Evaluating order %d polynomial @ x = %.2lf\n", order, x);

    // Parse coefficients and print in nice format
    int i = 0;
    while(i < order) {
        coeffs[i] = strtod(argv[i + 2], NULL);
        printf("%.2lf(%.2lf)^%d + ", coeffs[i], x, i);
        i++;
    }

    // Print final term differently and evaluate
    coeffs[i] = strtod(argv[i + 2], NULL);
    float result = evaluatePolynomial(coeffs, order, x);

    printf("%.2lf(%.2lf)^%d = %.2lf\n", coeffs[i], x, i, result);

    // Clean up
    free(coeffs);
    return EXIT_SUCCESS;
}

// coeffs = [a0, a1, a2, ..., an]
static double evaluatePolynomial(double *coeffs, int order, double x) {
    double powX = 1;
    double result = 0;
    for (int i = 0; i <= order; i++) {
        result += coeffs[i] * powX;
        powX *= x;
    }

    return result;
}

static double power(double x, int n) {
    // ...
}
