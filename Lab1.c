#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

void Lab1(int A, int B)
{
    int count = 0;
    for (int i = A; i <= B; i++) {
        count++;
    }
    // Виведення результату
    printf("Кількість цілих чисел між %d та %d (включно): %d\n", A, B, count);
}