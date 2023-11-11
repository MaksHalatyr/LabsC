#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>
#include "MyFuncs.h"
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int num;
    printf("Оберіть бажане звадання, введіть число 1-8 = ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        Lab1(2, 4);
        break;
    case 2:
        Lab2(100, 150, 5, 2);
        break;
    case 3:
        printf("Result = %.2lf", Lab3(2, 3, 4));
        break;
    case 4:
        printf("Result = %.2lf", Lab4(5));
        break;
    case 5:
        Lab5('a', 'b');
        break;
    case 6:
        Lab6();
        break;
    case 7:
        Lab7();
        break;
    case 8:
        Lab8();
        break;
    default:
        printf("Incorrect number");
        break;
    }
    return 0;
}