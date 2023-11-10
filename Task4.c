#include <stdio.h>
int main()
{
    // Введення значень a, b, c та x
    double a, b, c, x, result;

    printf("Введіть значення a, b, c, x: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &x);

    if (x < 0 && b != 0)
    {
        result = a * x * x + b;
    }
    else if (x > 0 && b == 0)
    {
        result = (x - a) / (x - c);
    }
    else
    {
        result = x / c;
    }
    // Обчислення значення функції F(x)

    // Виведення результату
    printf("F(x) = %lf\n", result);

    return 0;
}