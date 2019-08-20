#include <stdio.h>

void multiplicar_matrizes(int l1, int c1, int matriz1[][c1], int l2, int c2, int matriz2[][c2])
{
	//A matriz produto terá o número de linhas de A e o número de colunas de B 
	int i,j, produto[l1][c2], ki, kj,aux;
	for (ki = 0; ki <= l1; ++ki)
	{//primeiro laço para fixar as linhas, percorre a matriz[ki]
		for (kj = 0; kj <= c2; ++kj)
		{//segundo laço para fixar as colunas, percorre a matriz[kj]
			aux=0;
			for (i = 0; i <c1; ++i)
			{//o i irá percorrer as linhas e colunas de 1 e 2, logo elas serao iguais
				//tanto faz colocar l1 ou c2;
				aux = aux+(matriz1[ki][i]*matriz2[i][kj]);
				//o aux irá receber ele mesmo mais a resolucao do produto por matriz;
				//aux ira armazenar os resultados e joga-los na matriz produto;
			}
			produto[ki][kj] = aux;
		}
	}
	printf("O resultado do produto é:\n");
	for (i = 0; i < l1; ++i)
	{
		for (j = 0; j < c2; ++j)
		{
			printf("%d ", produto[i][j]);
		}
		printf("\n");
	}
}
int main()
{//o programa ira definir o produto de duas funcoes;
	printf("Observação, só é possivel efetuar o produto se\n");
	printf("numero de colunas da primeira matriz for igual ao numero de linhas da segunda matriz.\n");
	printf("\n");
	int l1, c1, l2, c2, i, j;
	printf("Insira o numero de linhas e colunas da primeira matriz:\n");
	scanf("%d %d", &l1, &c1);
	printf("Agora insira o numero de linhas e colunas da segunda matriz:\n");
	scanf("%d %d", &l2, &c2);
	int matriz1[l1][c1], matriz2[l2][c2];
	if (c1!=l2)
	{
		printf("Nâo é possivel efetuar o produto, pois o numero de colunas e o numero de linhas nao batem.\n");
		return 0;
	}
	else
	{
		printf("Insira a matriz um:\n");
		for (i = 0; i < l1; ++i)
		{
			for (j = 0; j < c1; ++j)
			{
				scanf("%d", &matriz1[i][j]);
			}
		}
		printf("Insira a matriz dois:\n");
		for (i = 0; i < l2; ++i)
		{
			for (j = 0; j < c2; ++j)
			{
				scanf("%d", &matriz2[i][j]);
			}
		}
		multiplicar_matrizes(l1,c1, matriz1, l2,c2,matriz2);
	}
	return 0;
}