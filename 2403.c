#include <stdio.h>

int divisores(int n, int mais, int frequencia, int divisor, int salvar, int numeromais)
{
	if (divisor==salvar)
	{
		printf("mostFrequent: %d, frequency: %d\n",numeromais, mais);
	}
	else
	{
		if (n%divisor==0)
		{
			n = n/divisor;
			++frequencia;
			divisores(n, mais, frequencia, divisor, salvar, numeromais);
		}
		else
		{
			if (frequencia> mais)
			{
				mais = frequencia;
				numeromais= divisor;
			}
			divisores(salvar, mais, 0, divisor+1, salvar, numeromais);
		}
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	divisores(n,0,0,2,n, 2);
	return 0;
}