#include <stdio.h>
#include <string.h>

int main() {
    char donor[100], sequence[1000];

    // Введення слова-донора та послідовності слів
    printf("Введіть слово-донора: ");
    scanf("%s", donor);
    printf("Введіть послідовність слів: ");
    getchar(); // очистка буфера
    fgets(sequence, sizeof(sequence), stdin);

    // Розділення рядка на слова
    char *word = strtok(sequence, " ");
    printf("Слова, які можна скласти з слова-донора:\n");

    while (word != NULL) {
        // Видалення символу нового рядка (якщо він присутній)
        char *newline = strchr(word, '\n');
        if (newline != NULL) {
            *newline = '\0';
        }

        // Перевірка можливості складання слова
        int donorFreq[26] = {0};
        int wordFreq[26] = {0};

        // Заповнення масиву donorFreq
        for (int i = 0; i < strlen(donor); i++) {
            donorFreq[donor[i] - 'A']++;
        }

        // Заповнення масиву wordFreq
        for (int i = 0; i < strlen(word); i++) {
            wordFreq[word[i] - 'A']++;
        }

        // Перевірка, чи можна скласти слово
        int canConstruct = 1;
        for (int i = 0; i < 26; i++) {
            if (wordFreq[i] > donorFreq[i]) {
                canConstruct = 0; // слово неможливо скласти
                break;
            }
        }

        if (canConstruct) {
            printf("%s\n", word);
        }

        // Отримання наступного слова
        word = strtok(NULL, " ");
    }

    return 0;
}
