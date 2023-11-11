#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

void Lab6()
{
    const int size = 50;
    int numbers[size];
    // Введення 50 чисел
    for (int i = 0; i < size; ++i) {
        numbers[i]=i+1;
    }
    // Знаходження мінімального числа
    int min = INT_MAX;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    // Підрахунок кількості чисел, відмінних від мінімального
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] != min) {
            count++;
        }
    }
    // Виведення результату
    printf("Мінімальне число: %d\n", min);
    printf("Кількість чисел, відмінних від мінімального: %d\n", count);
}