#include <stdio.h>

int main() {
    char text[1000];
    printf("Введіть текст: ");
    fgets(text, sizeof(text), stdin);

    printf("Зашифрований текст: ");
    for (int i = 0; text[i] != '\0'; ++i) {
        // Заміна кожного символу його ASCII-кодом
        printf("%d ", (int)text[i]);
    }
    printf("\n");

    return 0;
}
