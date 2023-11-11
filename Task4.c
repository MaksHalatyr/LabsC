#include <stdio.h>

int main() {
    int m, n;

    // Введення розмірів матриці
    printf("Введіть кількість рядків m: ");
    scanf("%d", &m);
    printf("Введіть кількість стовпців n: ");
    scanf("%d", &n);

    // Перевірка на невірний ввід (наприклад, m або n менше або дорівнює 0)
    if (m <= 0 || n <= 0) {
        printf("Невірний ввід для розмірів матриці.\n");
        return 1; // Вихід з програми з помилкою
    }

    double matrix[m][n];

    // Введення елементів матриці
    printf("Введіть елементи матриці %dx%d:\n", m, n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    // Знаходження номера стовпця з мінімальним елементом
    int minColumn = 0;
    double minValue = matrix[0][0];

    for (int j = 0; j < n; ++j) {
        if (matrix[0][j] < minValue) {
            minValue = matrix[0][j];
            minColumn = j;
        }
    }

    // Виведення результату
    printf("Номер стовпця з мінімальним елементом: %d\n", minColumn + 1);

    return 0;
}
