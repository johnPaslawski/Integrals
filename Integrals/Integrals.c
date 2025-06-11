#include <stdio.h>
#include "math_functions.h"

int main(int argc, char* argv[])
{
    double a, b;
    int n;

    printf("\n\n");
    printf("Podaj dolną granicę całkowania: ");
    scanf_s(" %lf", &a);
    printf("Podaj górną granicę całkowania: ");
    scanf_s(" %lf", &b);
    printf("Podaj liczbę podziałów / prób: ");
    scanf_s("%d", &n);
    printf("\n\n");

    printf("Funkcja f(x)=-x^2 :\n");
    //printf("Metoda prostokątów\n");
    integral_rectangle(f1_minus_squared_x, a, b, n);
    //printf("Metoda trapezów\n");
    integral_trapeze(f1_minus_squared_x, a, b, n);
    //printf("Metoda Monte-Carlo\n");
    integral_montecarlo(f1_minus_squared_x, a, b, n);
    printf("\n");

    printf("Funkcja f(x)=x^3 :\n");
    //printf("Metoda prostokątów\n");
    integral_rectangle(f2_cubed_x, a, b, n);
    //printf("Metoda trapezów\n");
    integral_trapeze(f2_cubed_x, a, b, n);
    //printf("Metoda Monte-Carlo\n");
    integral_montecarlo(f2_cubed_x, a, b, n);
    printf("\n");

    printf("Funkcja f(x)=ln(x) :\n");
    //printf("Metoda prostokątów\n");
    integral_rectangle(f3_ln_x, a, b, n);
    //printf("Metoda trapezów\n");
    integral_trapeze(f3_ln_x, a, b, n);
    //printf("Metoda Monte-Carlo\n");
    integral_montecarlo(f3_ln_x, a, b, n);
    printf("\n");

    printf("Funkcja f(x)=1/x :\n");
    //printf("Metoda prostokątów\n");
    integral_rectangle(f4_one_over_x, a, b, n);
    //printf("Metoda trapezów\n");
    integral_trapeze(f4_one_over_x, a, b, n);
    //printf("Metoda Monte-Carlo\n");
    integral_montecarlo(f4_one_over_x, a, b, n);
    printf("\n\n");
    system("pause");

    return 0;
}

