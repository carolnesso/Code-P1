#include <stdio.h>

void matriz_transposta(int l, int c, int matriz[l][c])
{
	int i, j;
	for (i = 0; i < c; ++i)
	{
		for (j = 0; j < l; ++j)
		{
			printf("%d ", matriz[j][i]);
		}
		printf("\n");
	}
}
int main()
{
	int l, c, i, j;
	printf("Defina o numero de linhas e de colunas da matriz:\n");
	scanf("%d%d", &l, &c);
	int matriz[l][c];
	printf("A matriz sera de: MATRIZ[%d][%d]\n", l, c);
	for (i = 0; i < l; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("A matriz fica:\n");
	/*for (i = 0; i < l; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}*/
	matriz_transposta(l, c, matriz);
	return 0;
}