#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	float a, b, c;
	float P;
	float S;

	printf(" Введите первый катет:  ");
	scanf("%f",&a);

	printf(" Введите второй катет:  ");
	scanf("%f", &b);

	printf("a = %f\n", a);
	printf("b = %f\n", b);

	c = sqrt(a*a+b*b);
	P = a + b + c;
	S = (a * b)/2;

	printf("Результаты вычислений:\n");
	printf("Гипотенуза равна %2.4f\n",c);
	printf("Площадь равна %2.4f\n", S);
	printf("Периметр равен %2.4f\n", P);

	return 0;
}