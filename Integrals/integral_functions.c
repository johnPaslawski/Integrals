#include "integral_functions.h"
#include "math_functions.h"
#include <stdio.h>
#include <stdlib.h>

typedef double (*my_function_ptr)(double);

void integral_rectangle(my_function_ptr f, double LOWER_BOUND, double UPPER_BOUND, int n) {
    double dx = (UPPER_BOUND - LOWER_BOUND) / n;
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double x = LOWER_BOUND + i * dx;
        sum += f(x);
    }
    double result = dx * sum;
    printf("Metoda prostokątów: %lf\n", result);
}

void integral_trapeze(double (*f)(double), double LOWER_BOUND, double UPPER_BOUND, int n) {
    double dx = (UPPER_BOUND - LOWER_BOUND) / n;
    double sum = 0.5 * (f(LOWER_BOUND) + f(UPPER_BOUND));
    for (int i = 1; i < n; i++) {
        double x = LOWER_BOUND + i * dx;
        sum += f(x);
    }
    double result = dx * sum;
    printf("Metoda trapezów: %lf\n", result);
}

void integral_montecarlo(double (*f)(double), double LOWER_BOUND, double UPPER_BOUND, int n) {
    srand(time(NULL));
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double x = LOWER_BOUND + ((double)rand() / RAND_MAX) * (UPPER_BOUND - LOWER_BOUND);
        sum += f(x);
    }
    double result = (UPPER_BOUND - LOWER_BOUND) * sum / n;
    printf("Metoda Monte Carlo: %lf\n", result);
}
