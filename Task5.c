#include <stdio.h>

int main()
{
    int n = 10; // Задане значення n

    double result = 0.0;

    for (int i = 1; i <= n; ++i)
    {
        double product = 1.0;
        for (int j = 1; j <= i; ++j)
        {
            product *= (i + j);
        }
        result += product + 1.0 / i;
    }

    // Виведення результату
    printf("Результат: %lf\n", result);

    return 0;
}
