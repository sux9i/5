#include <stdio.h>
#include <locale.h>
#include <math.h>
#define T -6.0

int main() 
{
    setlocale(LC_ALL, "RUS");
    double x, a, b, y;
    printf("Введите значение x: ");
    scanf_s("%lf", &x);
    a = log(x);
    b = sqrt(pow(x, 2) + pow(T, 2));
    y = pow(fabs(a - b * x), 1.0 / 5.0);
    printf("При x = %.1f, y = %.4f\n", x, y);
}
