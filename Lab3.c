#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

double Lab3(double x,double y, double z)
{
    double X, Y, Z;
    printf("Введіть три дійсних числа (X Y Z): ");
    scanf("%lf %lf %lf", &X, &Y, &Z);
    // Знаходження максимального числа
    double max;
    if (X >= Y && X >= Z) {
        max = X;
    } else if (Y >= X && Y >= Z) {
        max = Y;
    } else {
        max = Z;
    }
    return max;
}