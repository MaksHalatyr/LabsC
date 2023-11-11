#include <stdio.h>
#include <math.h>

int main() {
    int n;

    // Введення цілого n
    printf("Введіть ціле n: ");
    scanf("%d", &n);

    double result = 0.0;
    double partialSum = 0.0;

    for (int i = n; i >= 1; --i) {
        partialSum += sin(i);
        result += 1.0 / partialSum;
    }

    // Виведення результату
    printf("Результат виразу: %lf\n", result);

    return 0;
}
