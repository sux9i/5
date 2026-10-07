#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main()
{
	setlocale(LC_ALL, "RUS");
	double gr, res;
	printf("Ввод угла в градусах:");
	scanf_s("%lf", &gr);
	res = sin(gr * M_PI / 180.0);
	printf("Синус угла %.0f градусов=%.6f", gr, res);
}