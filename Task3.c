#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

void Lab1(int A, int B)
{
    int count = 0;
    for (int i = A; i <= B; i++) {
        count++;
    }
    // Виведення результату
    printf("Кількість цілих чисел між %d та %d (включно): %d\n", A, B, count);
}
void Lab2(double V1, double V2, double A, double T)
{
    // Переведення швидкостей з км/год в км/с
    V1 /= 3600;
    V2 /= 3600;
    // Обчислення відстані між автомобілями
    double S = (V1 + V2) * T + 0.5 * A * T * T;
    // Виведення результату
    printf("Відстань між автомобілями через %.2f годин: %.2f км\n", T, S);
}
double Lab3(double x,double y, double z)
{
    double X, Y, Z;
    printf("Введіть три дійсних числа (X Y Z): ");
    scanf("%lf %lf %lf", &X, &Y, &Z);
    // Знаходження максимального числа
    double max;
    if (X >= Y && X >= Z) {
        max = X;
    } else if (Y >= X && Y >= Z) {
        max = Y;
    } else {
        max = Z;
    }
    return max;
}
double Lab4(int n)
{
    double result = 0.0;
    double partialSum = 0.0;
    for (int i = n; i >= 1; --i) {
        partialSum += sin(i);
        result += 1.0 / partialSum;
    }
    return result;
}
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
void Lab6()
{
    const int size = 50;
    int numbers[size];
    // Введення 50 чисел
    for (int i = 0; i < size; ++i) {
        numbers[i]=i+1;
    }
    // Знаходження мінімального числа
    int min = INT_MAX;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    // Підрахунок кількості чисел, відмінних від мінімального
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] != min) {
            count++;
        }
    }
    // Виведення результату
    printf("Мінімальне число: %d\n", min);
    printf("Кількість чисел, відмінних від мінімального: %d\n", count);
}
void Lab7()
{
    char text[1000];
    printf("Введіть текст: ");
    fgets(text, sizeof(text), stdin);
    int countA = 0, countO = 0;
    for (int i = 0; text[i] != '\0'; ++i) {
        char currentChar = tolower(text[i]); // перетворення на нижній регістр для порівняння

        if (currentChar == 'а') {
            countA++;
        } else if (currentChar == 'о') {
            countO++;
        }
    }
    if (countA > 0 && countO > 0) {
        if (countA > countO) {
            printf("Символ 'а' зустрічається частіше (%d разів)\n", countA);
        } else if (countO > countA) {
            printf("Символ 'о' зустрічається частіше (%d разів)\n", countO);
        } else {
            printf("Символи 'а' та 'о' зустрічаються однакову кількість разів (%d разів)\n", countA);
        }
    } else {
        printf("Один із символів ('а' або 'о') відсутній у тексті.\n");
    }

}
void Lab8()
{
    struct ZNAK {
    char name[50];
    char zodiacSign[20];
    int birthDate[3]; // Масив для дати народження
};
    struct ZNAK people[4];
    int monthToSearch;

    // Введення даних про людей
    for (int i = 0; i < 4; i++) {
        printf("Введіть дані для особи #%d:\n", i + 1);

        printf("Прізвище, ім'я: ");
        scanf("%s", people[i].name);

        printf("Знак Зодіаку: ");
        scanf("%s", people[i].zodiacSign);

        printf("Дата народження (день місяць рік): ");
        scanf("%d %d %d", &people[i].birthDate[0], &people[i].birthDate[1], &people[i].birthDate[2]);

        printf("\n");
    }
    // Сортування за знаками Зодіаку
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (strcmp(people[j].zodiacSign, people[j + 1].zodiacSign) > 0) {
                // Обмін елементів місцями
                struct ZNAK temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }
    // Введення місяця для пошуку
    printf("Введіть номер місяця для пошуку (1-12): ");
    scanf("%d", &monthToSearch);
    // Виведення інформації про людей, що народилися в введеному місяці
    int found = 0;
    for (int i = 0; i < 4; i++) {
        if (people[i].birthDate[1] == monthToSearch) {
            printf("Прізвище, ім'я: %s\n", people[i].name);
            printf("Знак Зодіаку: %s\n", people[i].zodiacSign);
            printf("Дата народження: %02d.%02d.%04d\n", people[i].birthDate[0], people[i].birthDate[1], people[i].birthDate[2]);
            printf("\n");
            found = 1;
        }
    }
    // Повідомлення, якщо таких людей немає
    if (!found) {
        printf("Немає людей, що народилися в введеному місяці.\n");
    }
}
int main() {

    int num;
    printf("Оберіть бажане звадання, введіть число 1-8 = ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        Lab1(2,4);
        break;
    case 2:
        Lab2(100,150,5,2);
        break;
    case 3:
        printf("Result = %.2lf",Lab3(2,3,4));
        break;
    case 4:
        printf("Result = %.2lf",Lab4(5));
        break;
    case 5:
        Lab5('a','b');
        break;
    case 6:
        Lab6();
        break;
    case 7:
        Lab7();
        break;
    case 8:
        Lab8();
        break;
    default:
        printf("Incorrect number");
        break;
    }
    return 0;
}