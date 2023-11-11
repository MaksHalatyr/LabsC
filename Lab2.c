#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

void Lab2(double V1, double V2, double A, double T)
{
    // Переведення швидкостей з км/год в км/с
    V1 /= 3600;
    V2 /= 3600;
    // Обчислення відстані між автомобілями
    double S = (V1 + V2) * T + 0.5 * A * T * T;
    // Виведення результату
    printf("Відстань між автомобілями через %.2f годин: %.2f км\n", T, S);
}