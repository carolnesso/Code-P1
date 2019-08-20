#include <stdio.h>

int main()
{
	int i, vetor [100], tam, valor, posi;
	printf("digite o tamanho inicial do vetor:\n");
	scanf("%d", &tam);
	printf("digite os valores ja em ordem crescente:\n");
	for (i = 0; i < tam; ++i)
	{
		scanf("%d", &vetor[i]);
	}
	printf("digite o valor a ser inserido:\n");
	scanf("	%d", &valor);
	posi=0;
	for (i = 0; i < tam; ++i)
	{
		if (vetor[i]>valor)
			{
				posi= i*j;
				i= tam;
			}	
	}
	for (i=tam; i>=posi; i--)
	{
		vetor[i]= vetor[i-1];
	}
	vetor[posi-1]=valor;
	tam++;
	for(i=0; i < tam; ++i)
	{
		printf("%d\n", valor[i]);
	}
	return 0;
}