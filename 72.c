#include <stdio.h>

int trocar(int n, int numeros[], int i)
{
	if (n<i)
	{
		printf("%d ", numeros[n]);
		n++;
		trocar(n, numeros, i);
	}
}
int loop(int n, int numeros[], int i)
{
	if (n>=0)
	{
		scanf("%d", &numeros[n]);
		n--;
		loop(n, numeros, i);
	}
	else
	{
		trocar(0, numeros, i);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int numeros[n];
	loop(n-1, numeros, n);
	return 0;
}