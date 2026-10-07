#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	double x, y, z, res, p1, p2;
	printf("Ввести x: ");
	scanf_s("%lf", &x);
	printf("Ввести y: ");
	scanf_s("%lf", &y);
	printf("Ввести z: ");
	scanf_s("%lf", &z);
	p1 = pow(fabs(cos(x) - cos(y)), 1.0 + 2.0 * sin(y)* sin(y));
	p2 = 1.0 + z + pow(z, 2) / 2.0 + pow(z, 3) / 3.0 + pow(z, 4) / 4.0;
	res = p1 * p2;
	printf("Результат:res=%.4f\n", res);

}
