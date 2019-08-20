#include <stdio.h>

int main(int argc, char const *argv[])
{
	double n, n2, n3, n4, aux;
	scanf("%lf %lf %lf %lf", &n, &n2, &n3, &n4);
	if (n>n2)
	{
		aux = n;
		n=n2;
		n2=aux;
	}
	if (n>n3)
	{
		aux = n;
		n= n3;
		n3= aux;
	}
	if (n>n4)
	{
		aux=n;
		n=n4;
		n4=aux;
	}
	if (n2>n3)
	{
		aux = n2;
		n2= n3;
		n3=aux;
	}
	if (n2>n4)
	{
		aux = n2;
		n2= n4;
		n4=aux;
	}
	if (n3>n4)
	{
		aux=n3;
		n3=n4;
		n4=aux;
	}
	printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", n, n3, n4, n2);
	return 0;
}