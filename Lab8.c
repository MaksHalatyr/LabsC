#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>


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