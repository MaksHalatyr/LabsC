#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

void Lab5(char a, char b)
{
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
}