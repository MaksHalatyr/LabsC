#include <stdio.h>

int main() {
    int n;

    // Введення розміру послідовності
    printf("Введіть розмір послідовності: ");
    scanf("%d", &n);

    // Перевірка на невірний ввід (наприклад, n <= 0)
    if (n <= 0) {
        printf("Невірний ввід для розміру послідовності.\n");
        return 1; // Вихід з програми з помилкою
    }

    int sequence[n];

    // Введення елементів послідовності
    printf("Введіть %d чисел:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &sequence[i]);
    }

    // Пошук найбільшої кількості однакових розташованих підряд чисел
    int currentStreak = 1; // Поточна кількість чисел в підряд
    int maxStreak = 1;     // Максимальна кількість чисел в підряд

    for (int i = 1; i < n; ++i) {
        if (sequence[i] == sequence[i - 1]) {
            // Число співпадає з попереднім, збільшуємо поточну кількість
            currentStreak++;
        } else {
            // Запам'ятовуємо максимальну кількість та обнуляємо поточну
            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
            currentStreak = 1;
        }
    }

    // Завершуємо перевірку для останнього елемента послідовності
    if (currentStreak > maxStreak) {
        maxStreak = currentStreak;
    }

    // Виведення результату
    printf("Найбільша кількість однакових розташованих підряд чисел: %d\n", maxStreak);

    return 0;
}
