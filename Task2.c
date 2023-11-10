#include <stdio.h>

int main() {
    // Введення даних
    double m_water = 300.0; // маса води в кг
    double c_water = 3750.0; // питома теплоємність води в Дж/кг·ºC
    double initial_temp = 10.0; // початкова температура води в ºC
    double final_temp = 100.0; // кінцева температура води в ºC

    double m_wood = 150.0; // маса соснових дров в кг
    double c_wood; // питома теплоємність згоряння соснових дров (ще невідома)

    // Обчислення питомої теплоємності згоряння дров
    c_wood = (m_water * c_water) / (m_wood * (final_temp - initial_temp));

    // Виведення результату
    printf("Питома теплоємність згоряння соснових дров: %.2f Дж/кг·ºC\n", c_wood);

    return 0;
}
