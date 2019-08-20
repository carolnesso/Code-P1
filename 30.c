#include <stdio.h>

void viagens(int cidades[][9])
{
	int i, j, l, c, aux, menor_distancia, final_i;
	printf("Insira os codigos das cidades[linhas][colunas]:\n");
	scanf("%d%d", &l, &c);
	for (i = 0; i < 9; ++i)
	{
		for (j = 0; j < 9; ++j)
		{
			if (cidades[i][j]==cidades[l][c])
			{
				aux = cidades[l][c];
				
			}
		}
	}
	if (aux>400)
	{
		for (i = 0; i < l; ++i)
		{
			if (cidades[i][c]<400)
			{
				menor_distancia = cidades[i][c];
				if (cidades[i][c]<menor_distancia)
				{
					menor_distancia = cidades[i][c];
				}
				final_i = i;
			}
		}
	}
	int distancia_total = cidades[final_i][l] + menor_distancia;
	printf("A distancia é: %d.\n", distancia_total);
}
int main()
{
	int cidades[9][9], i,j;
	printf("Digite as distancias entre as cidades:\n");
	for (i = 0; i < 9; ++i)
	{
		for (j = 0; j < 9; ++j)
		{
			scanf("%d", &cidades[i][j]);
		}
	}
	for (i = 0; i < 9; ++i)
	{
		for (j = 0; j < 9; ++j)
		{
			printf("%d ", cidades[i][j]);
		}
		printf("\n");
	}
	viagens(cidades);
	return 0;
}