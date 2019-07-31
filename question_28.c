#include <stdio.h>

void tirando_as_medias(int l, int c, double matriz[][c])
{
	int i, j;
	double soma;
	for (i = 0; i < l; ++i)
	{
		soma = 0;
		for (j = 0; j < c-1; ++j)
		{
			soma+=matriz[i][j];
		}
		matriz[i][c-1] = soma/(c-1);
	}
	printf("#####\n");
	for (i = 0; i < l; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			printf("%.0lf ", matriz[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int l, c, i, j;
	printf("Digite o numero de linhas e colunas da matriz:\n");
	printf("Obs: lembrando que a ultima coluna sera reservada\npara as medias...");
	scanf("%d%d", &l, &c);
	printf("Digite a matriz:\n");
	double matriz[l][c];
	for (i = 0; i < l; ++i)
	{
		for (j = 0; j < c-1; ++j)
		{
			scanf("%lf", &matriz[i][j]);
		}
	}
	tirando_as_medias(l, c, matriz);
	return 0;
}
