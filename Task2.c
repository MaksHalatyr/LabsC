#include <stdio.h>
#include <math.h>

int main() {
    double circumference; // Довжина кола
    double *radius_ptr;    // Покажчик на радіус кола
    double radius;         // Змінна для збереження значення радіуса

    // Введення довжини кола
    printf("Введіть довжину кола: ");
    scanf("%lf", &circumference);

    // Розрахунок радіуса кола
    radius = circumference / (2 * M_PI);
    
    // Ініціалізація покажчика на радіус
    radius_ptr = &radius;

    // Розрахунок площі круга
    double area = M_PI * (*radius_ptr) * (*radius_ptr);

    // Виведення результату
    printf("Радіус кола: %lf\n", *radius_ptr);
    printf("Площа круга: %lf\n", area);

    return 0;
}
