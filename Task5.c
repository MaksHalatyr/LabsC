#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru_RU.utf8");
    char caseSymbol;

    // Введення позначення відмінка
    printf("Введіть позначення відмінка: ");
    scanf(" %c", &caseSymbol);

    // Розгалуження за введеним позначенням відмінка
    switch (caseSymbol) {
        case 'н':
        case 'Н':
            printf("Називний відмінок — Хто? Що?\n");
            break;
        case 'р':
        case 'Р':
            printf("Родовий відмінок — Кого? Чого?\n");
            break;
        case 'д':
        case 'Д':
            printf("Давальний відмінок — Кому? Чому?\n");
            break;
        case 'з':
        case 'З':
            printf("Знахідний відмінок — Кого? Що?\n");
            break;
        case 'о':
        case 'О':
            printf("Орудний відмінок — З ким? З чим?\n");
            break;
        case 'м':
        case 'М':
            printf("Місцевий відмінок — Про кого? Про що?\n");
            break;
        case 'к':
        case 'К':
            printf("Кличний відмінок — Ой кого? Ой що?\n");
            break;
        default:
            printf("Невідомий відмінок\n");
            break;
    }

    return 0;
}
