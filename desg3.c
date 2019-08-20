#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, vetor[100], tam, posi;
	printf("digite o tamanho inicial do vetor:\n");
	scanf("%d", &tam);
	for (i = 0; i < tam; ++i)
	{
		printf("digite o elemento i:\n", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("digite a posicao a ser excluida:\n");
	scanf("%d", &posi);
	for (i = posi-1; i < tam; ++i)
	{
		vetor[i]=vetor [i+1];
	}
	tam= i--;
	for (i = 0; i < tam; ++i)
	{
		printf("%d\n", vetor[i]);
	}
	return 0; 
}