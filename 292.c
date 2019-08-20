#include <stdio.h>

int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double area_tretangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;
	area_tretangulo = (a*c)/2;
	area_circulo = 3.14159*(c*c);
	area_trapezio = ((a+b)/2)*c;
	area_quadrado = b*b;
	area_retangulo = a*b;
	printf("TRIANGULO: %.3lf\n", area_tretangulo);
	printf("CIRCULO: %.3lf\n", area_circulo);
	printf("TRAPEZIO: %.3lf\n", area_trapezio);
	printf("QUADRADO: %.3lf\n", area_quadrado);
	printf("RETANGULO: %.3lf\n", area_retangulo);
	return 0;
}