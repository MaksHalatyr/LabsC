#include <stdio.h>
#include <math.h>

int main() {
    double result = 0.0;
    double term;
    int n = 1;

    do {
        term = (1.0 - 1.0 / (2 * n + 1)) * atan(1.0 / (2 * n - 1));
        result += term;
        ++n;
    } while (fabs(term) > 1e-6); // Зупинка, коли наступний член стає дуже малим


    // Виведення результату
    printf("Границя виразу: %lf\n", result);

    return 0;
}
