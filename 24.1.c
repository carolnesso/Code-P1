#include <stdio.h>
//ele tem que inserir quais linhas irão mudar;
int  invertendo(int l, int c, int matriz[][c], int l1, int l2)
{
	int i, j, aux; 
	for (i = 0; i < c; ++i)
	{
		aux = matriz[l1][i];
		matriz[l1][i]= matriz[l2][i];
		matriz[l2][i]= aux;
	}
	for (i = 0; i < l; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
int main()

{
	int l, c, i, j, l1, l2;
	printf("digite os numeros de linhas e colunas:\n");
	scanf("%d%d", &l, &c);
	int matriz[l][c];
	printf("Digite a matriz:\n");
	for (i = 0; i < l; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	if (l==2)
	{
		invertendo(l, c, matriz, 0, 1);
	}
	else
	{
		printf("Insira as linhas que irao permutar:\n");
		scanf("%d%d", &l1, &l2);
		invertendo(l, c, matriz, l1, l2);
	}
	return 0;
}