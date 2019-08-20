#include <stdio.h>

double eh_primo(int n, int divisor)
{
	if (n==1)
	{
		return n;
	}
	if (divisor==1)
	{
		return 1;
	}
	if (n==0)
	{
		return 0;
	}
	if (n%divisor==0)
	{
		return 0;
	}
	else
	{
		eh_primo(n, divisor-1);
	}
}
double proximo_primo(int n)
{
	if (eh_primo(n, n-1)==1)
	{
		return n;
	}
	else
	{
		proximo_primo(n+1);
	}
}
double fatorial(int num, int n)
{
	if (n==0)
	{
		return num;
	}
	else
	{
		num= n*num;
		fatorial(num, n-1);
	}
}
int loop(int n, int i, double soma)
{
	if (i<n-1)
	{	
		i++;
		printf("%d!/%.0lf + ",i,proximo_primo(i) );
		soma= (fatorial(i, i-1)/proximo_primo(i))+soma;
		loop(n, i, soma);
	}
	else if (i==n-1)
	{
		i++;
		printf("%d!/%.0lf\n",i,proximo_primo(i) );
		soma= (fatorial(i, i-1)/proximo_primo(i))+soma;
		loop(n, i, soma);
	}
	else
	{
		printf("%.2lf\n", soma);
	}
	
}
int main()
{
	int n;//numero de vezes que vai repetir os calculos;
	scanf("%d", &n);
	loop(n, 0, 0);
	
}