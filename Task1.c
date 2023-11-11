#include <stdio.h>
#include <ctype.h>

int main() {
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

    return 0;
}
