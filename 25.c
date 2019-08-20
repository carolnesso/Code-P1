#include <stdio.h>

void checando_matriz(int l, int c, int matriz[][c])
{
	int i, j;
	for (i = 0; i < l; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			if (j>i)
			{
				if (matriz[i][j]!=0)
				{
					printf("Nao e triangular.\n");
					return ;
				}
				else
				{
					printf("É triangular.\n");
					return ;
				}
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	int l, c, i, j;
	printf("Insira as linhas e colunas da matriz quadrada:\n");
	scanf("%d", &l);
	c = l;
	int matriz[l][c];
	printf("Insira os numeros da matriz:\n");
	for (i = 0; i < l; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	checando_matriz(l, c, matriz);
	return 0;
}