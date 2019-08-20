#include <stdio.h>

void multiply_matriz(int n, int m, int o, int matrizA[][m], int matrizB[][o])
{
	int i, j, ki, kj, result[n][o], aux;
	for (ki = 0; ki <= n; ++ki)
	{
		for (kj = 0; kj <= o; ++kj)
		{
			aux = 0;
			for (i = 0; i < m; ++i)
			{
				aux = aux+(matrizA[ki][i]*matrizB[i][kj]);
			}
			result[ki][kj] = aux;
		}
	}
	//print the result;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < o; ++j)
		{
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	//n== n de linhas de A, m == numero de colunas de A e de linhas de B;
	//o == numero de colunas de B;
	int n, m, o, i, j;
	scanf("%d%d%d", &n, &m, &o);
	int matrizA[n][m], matrizB[m][o];
	//intput from de matrizA;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			scanf("%d", &matrizA[i][j]);
		}
	}
	for (i = 0; i < m; ++i)
	{
		for (j = 0; j < o; ++j)
		{
			scanf("%d", &matrizB[i][j]);
		}
	}
	// for (i = 0; i < n; ++i)
	// {
	// 	for (j = 0; j < m; ++j)
	// 	{
	// 		printf("%d ", matrizA[i][j]);
	// 	}
	// 	printf("\n");
	// }
	// for (i = 0; i < m; ++i)
	// {
	// 	for (j = 0; j < o; ++j)
	// 	{
	// 		printf("%d ", matrizB[i][j]);
	// 	}
	// 	printf("\n");
	// }
	multiply_matriz(n, m, o, matrizA, matrizB);
	return 0;
}