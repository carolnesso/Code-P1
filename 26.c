#include <stdio.h>
//para definir se a matriz sera simetrica, basta que 
//sua transposta seja igual a matriz original
void checar_matrizes(int l, int c, int matriz[][c])
{
	int i, j, aux, matriz2[c][l];
	for (i = 0; i < l; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			matriz2[j][i]=matriz[i][j];
		}
	}
	printf("A trasnposta é:\n");
	//essa tambem é a resposta para a questao 23;
	for (i = 0; i < c; ++i)
	{
		for (j = 0; j < l; ++j)
		{
			printf("%d ", matriz2[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < l; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			if (matriz[i][j] == matriz2[i][j])
			{
				aux+=1;
			}
			else
			{
				aux = 0;
			}
		}
	}
	if (aux>0)
	{
		printf("elas sao\n");
	}
	else
	{
		printf("elas nao sao\n");
	}
}
int main(int argc, char const *argv[])
{
	int l, c, i, j;
	printf("Digite o numero de linhas e colunas:\n");
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
	checar_matrizes(l ,c, matriz);
	return 0;
}