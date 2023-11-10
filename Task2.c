#include <stdio.h>
#include <math.h>
int main() {
    // Введення значень x та y
    double x, y;

    printf("Введіть значення x та y: ");
    scanf("%lf %lf", &x, &y);

    // Обчислення виразу
    double result = sqrt(x+2)/sqrt(y-1);

    // Виведення результату
    printf("Результат виразу: %lf\n", result);

    return 0;
}
