#include <stdio.h>

int main() {
    char a, b;

    // Введення значення змінних a і b
    printf("Введіть значення змінної a: ");
    scanf(" %c", &a);  // Пробіл перед %c для ігнорування пробілів, табуляцій та переведень рядка

    printf("Введіть значення змінної b: ");
    scanf(" %c", &b);

    // Оголошення та ініціалізація покажчиків
    char *ptr_a = &a;
    char *ptr_b = &b;

    // Зміна значення змінної a за допомогою покажчика
    *ptr_a = 'X';

    // Обмін значеннями a і b за допомогою покажчиків
    char temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    // Виведення результату
    printf("Значення змінної a після зміни: %c\n", a);
    printf("Значення змінної b після зміни: %c\n", b);

    return 0;
}
