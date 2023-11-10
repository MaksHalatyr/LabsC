#include <stdio.h>

int main() {
    int A, B;

    // Введення значень A та B
    printf("Введіть число A: ");
    scanf("%d", &A);

    printf("Введіть число B: ");
    scanf("%d", &B);

    // Підрахунок кількості цілих чисел між A та B
    int count = 0;
    for (int i = A; i <= B; i++) {
        count++;
    }

    // Виведення результату
    printf("Кількість цілих чисел між %d та %d (включно): %d\n", A, B, count);

    return 0;
}
