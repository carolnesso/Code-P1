#include <stdio.h>

void contando(int n, int i, int j, int cont, int tabuleiro[][n])
{
	if (i<n)
	{
		if (j<n)
		{
			if (tabuleiro[i][j]==0)
			{
				j++;
				cont++;
			}
			contando(n, i, j, cont, tabuleiro);
		}
		/*else
		{
			j = 0;
			i++;
		}*/
	}
	else
	{
		printf("%d\n", cont);
	}
}
void obstaculos(int n, int i, int j, int tabuleiro[][n])
{
	if (i<n)
	{
		if (j<n)
		{
			scanf("%d", &tabuleiro[i][j]);
			j++;
		}
		else
		{
			j = 0;
			i++;
		}
		obstaculos(n, i, j, tabuleiro);
	}
}
int main()
{
	int n;//n==tamanho do tabuleiro
	scanf("%d", &n);
	int tabuleiro[n][n];
	obstaculos(n, 0, 0, tabuleiro);
	contando(n, 0, 0, 0, tabuleiro);
	return 0;
}