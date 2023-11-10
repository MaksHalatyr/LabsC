#include <stdio.h>
#include <math.h>

int main() {
    // Введення координат вершин трикутника
    double x1, y1, x2, y2, x3, y3;
    printf("Введіть координати вершин трикутника (x1 y1 x2 y2 x3 y3): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    // Обчислення відстаней між вершинами
    double a = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    double c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    // Обчислення кутів за законом косинусів
    double angleA = acos((b * b + c * c - a * a) / (2 * b * c));
    double angleB = acos((a * a + c * c - b * b) / (2 * a * c));
    double angleC = acos((a * a + b * b - c * c) / (2 * a * b));

    // Виведення результату в радіанах
    printf("Кут A: %.4f радіан\n", angleA);
    printf("Кут B: %.4f радіан\n", angleB);
    printf("Кут C: %.4f радіан\n", angleC);

    return 0;
}
