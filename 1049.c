#include <stdio.h>

int main()
{
	double p, h;//p==peso, h==altura
	scanf("%lf %lf", &p, &h);
	printf("%.2lf\n", p/(h*h));
	return 0;
}