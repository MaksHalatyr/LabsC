#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x;

    // Введення n
    printf("Введіть n (n > 1): ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Введіть коректне значення n (n > 1)\n");
        return 1; // Вихід з програми з помилкою
    }

    // Введення x
    printf("Введіть число x: ");
    scanf("%lf", &x);

    double sum = 0.0;
    int count = 0;

    // Введення дійсних чисел a₁, a₂, ..., aₙ та обчислення кількості разів, коли x зустрічається
    for (int i = 1; i <= n; ++i) {
        double a;
        printf("Введіть число a%d: ", i);
        scanf("%lf", &a);

        sum += cos(a);

        if (fabs(cos(sum) - x) < 1e-6) {
            // Якщо cos(sum) дорівнює x з деякою точністю (уникнення проблем з плаваючою точкою)
            count++;
        }
    }

    // Виведення результату
    printf("Кількість разів, коли x зустрічається: %d\n", count);

    return 0;
}
