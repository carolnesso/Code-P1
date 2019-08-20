#include <stdio.h>

int preco(int a, double valor)
{
	if (a%3==0)
	{
		int d = a/3;
		valor= 2.20*(d+d);
		printf("%.2lf\n", valor);
	}
	else
	{
		
	}
}
int main()
{
	int a; //numero de alunos;
	scanf("%d", &a);
	preco(a, 0);
	return 0;
}