#include <stdio.h>
#include <math.h>

int main() {
    int n;

    // Введення натурального числа n
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    double sum = 0.0;
    double a;

    // Введення дійсних чисел a₁, a₂, ..., aₙ та обчислення суми
    for (int i = 1; i <= n; ++i) {
        printf("Введіть число a%d: ", i);
        scanf("%lf", &a);
        sum += fabs(a);
    }

    // Виведення результату
    printf("Сума чисел: %lf\n", sum);

    return 0;
}
