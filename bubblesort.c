#include <stdio.h>

int main()
{
	int n, n2, n3, n4;
	int a, b, c, d;
	scanf("%d", &n);
	n2= n%1000;
	n3= n2%100;
	n4= n3%10;
	a= n/1000;
	b= n2/100;
	c= n3/10;
	d= n4;
	if (a>b)
	{
		int aux= a;
		a=b;
		b= aux;
	}
	if (a>c)
	{
		int aux= a;
		a=c;
		c= aux;
	}
	if (a>d)
	{
		int aux= a;
		a= d;
		d=aux;
	}
	if (b>c)
	{
		int aux=b;
		b=c;
		c=aux;
	}
	if (b>d)
	{
		int aux=b;
		b=d;
		d=aux;
	}
	if (c>d)
	{
		int aux= c;
		c=d;
		d= aux;
	}
	printf("%d%d%d%d\n", a, b, c, d);
	return 0;
}