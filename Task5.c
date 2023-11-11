#include <stdio.h>

int main() {
    int p;

    // Введення розмірності матриці
    printf("Введіть розмірність матриці (p): ");
    scanf("%d", &p);

    // Перевірка на невірний ввід (наприклад, p менше або дорівнює 0)
    if (p <= 0) {
        printf("Невірний ввід для розмірності матриці.\n");
        return 1; // Вихід з програми з помилкою
    }

    double matrix[p][p];

    // Введення елементів матриці
    printf("Введіть елементи квадратної матриці %dx%d:\n", p, p);
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < p; ++j) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    // Знаходження мінімального елемента у матриці
    double minValue = matrix[0][0];
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < p; ++j) {
            if (matrix[i][j] < minValue) {
                minValue = matrix[i][j];
            }
        }
    }

    // Підрахунок кількості мінімальних елементів
    int countMinValues = 0;
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < p; ++j) {
            if (matrix[i][j] == minValue) {
                countMinValues++;
            }
        }
    }

    // Виведення результату
    printf("Кількість мінімальних елементів у матриці: %d\n", countMinValues);

    return 0;
}
