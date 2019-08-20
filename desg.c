#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, vetor[100], tam, valor, posi;
	printf("Digite o tamanho inicial do vetor:\n");
	scanf("%d", &tam);
	for (i = 0; i < tam; ++i)
	{
		printf("Digite o elemento i:\n");
		i+1;
		scanf("%d", &vetor[i]);
	}
	printf("Digite o valor a ser inserido:\n");
	scanf("%d", &valor);
	printf("Digite a posicao\n");
	scanf("%d", &posi);
	for (i=tam = 0; i>=posi; i--)
	{
		vetor[i]= vetor[i-1];
	}
//insira aqui algo estranho que não entendi, esta na foto;
	for (i = 0; i < tam; ++i)
	{
		printf("%d\n", vetor[i]);
	}
	return 0;
}