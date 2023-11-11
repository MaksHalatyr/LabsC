#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

double Lab4(int n)
{
    double result = 0.0;
    double partialSum = 0.0;
    for (int i = n; i >= 1; --i) {
        partialSum += sin(i);
        result += 1.0 / partialSum;
    }
    return result;
}