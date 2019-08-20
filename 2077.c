#include <stdio.h>

int loop(int a, int b, int c, int n)
{
	if (a*b*c>n)
	{
		printf("Falso\n");
		return 0;
	}
	if (a*b*c<n)
	{
		loop(a+1, b+1, c+1, n);
	}
	if (a*b*c==n)
	{
		printf("%d * %d * %d = %d\nVerdadeiro\n", a, b, c, n);
	}
}
int main ()
{
	int n;
	scanf("%d", &n);
	loop(1,2,3, n);
	return 0;
}