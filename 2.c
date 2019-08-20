#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a>b)
	{
		int aux= a;
		a = b;
		b = aux;
	}
	if (a>c)
	{
		int aux = a;
		a = c ;
		c = aux;
	}
	if (b>c)
	{
		int aux = b;
		b =c;
		c= aux;
	}
	printf("%d\n%d\n%d\n", a, b, c);
	return 0;
}
