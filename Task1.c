#include <stdio.h>

// Рекурсивна функція для обчислення X в ступені N
double PowerN(double X, int N) {
    if (N == 0) {
        return 1;
    } else if (N > 0 && N % 2 == 0) {
        // Для парних N
        double temp = PowerN(X, N / 2);
        return temp * temp;
    } else if (N > 0 && N % 2 != 0) {
        // Для непарних N
        return X * PowerN(X, N - 1);
    } else if (N < 0) {
        // Для від'ємних N
        return 1 / PowerN(X, -N);
    } else {
        // Інші випадки
        return 0; // Ви можете повертати інше значення або обробляти його відповідно до вашого варіанту
    }
}

int main() {
    double X;
    int N;

    // Введення значення X та N з клавіатури
    printf("Введіть дійсне число X: ");
    scanf("%lf", &X);

    printf("Введіть ціле число N: ");
    scanf("%d", &N);

    // Виклик рекурсивної функції та виведення результату
    double result = PowerN(X, N);
    printf("%lf в ступені %d дорівнює %lf\n", X, N, result);

    return 0;
}
