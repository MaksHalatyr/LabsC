#include <stdio.h>

int main() {
    // Введення трьох чисел
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

    // Виведення результату
    printf("Максимальне число: %lf\n", max);

    return 0;
}
