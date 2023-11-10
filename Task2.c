#include <stdio.h>
#include <math.h>

int main() {
    // Введення значень змінних
    double alpha, beta;

    printf("Введіть значення alpha в радіанах: ");
    scanf("%lf", &alpha);

    printf("Введіть значення beta в радіанах: ");
    scanf("%lf", &beta);

    // Обчислення виразу z1
    double z1_numerator = sin(alpha) + cos(2 * beta - alpha);
    double z1_denominator = cos(alpha) - sin(2 * beta - alpha);
    double z1 = z1_numerator / z1_denominator;

    // Обчислення виразу z2
    double z2_numerator = 1 + pow(sin(beta), 2);
    double z2_denominator = pow(cos(beta), 2);
    double z2 = z2_numerator / z2_denominator;

    // Виведення результатів
    printf("z1 = %lf\n", z1);
    printf("z2 = %lf\n", z2);

    return 0;
}
