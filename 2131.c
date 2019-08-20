#include <stdio.h>

void contando(int votos, int l, int c, int i, int j, int matriz[][j])
{
		/*j tem que descer, no caso o i tem que 
		descer primeiro, enquanto j permanece*/
	if (c<j)
	{
		if (l<i)
		{
			votos+=matriz[l][c];
			l++;  
		}
		else
		{
			printf("Princesa %d: %d voto(s)\n", c+1, votos);
			votos = 0;
			l = 0;
			c++;
		}
		contando(votos, l, c, i, j, matriz);
	}
}
void votando(int l, int c, int i, int j, int matriz[][j])
{
	if (l<i)
	{
		if (c<j)
		{
			scanf("%d", &matriz[l][c]);
			c++;
		}
		else
		{
			c = 0;
			l++;
		}
		votando(l, c, i, j, matriz);
	}
}
int main()
{
	int i, j;//i==votantes==linhas; j==princesas==colunas;
	scanf("%d %d", &j, &i);
	int matriz[i][j];
	votando(0, 0, i, j, matriz);
	contando(0, 0, 0, i, j, matriz);
	return 0;
}