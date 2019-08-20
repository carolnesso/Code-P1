#include <stdio.h>

void somar(int i, int j, int ordem, int m1[][ordem], int m2[][ordem])
{
	if (i<ordem)
	{
		if (j<ordem)
		{
			printf("%d\n", m1[i][j]+m2[i][j]);
			j++;
		}
		else
		{
			j=0;
			i++;
		}
		somar(i, j, ordem, m1, m2);
	}
}
void ler_matriz(int i, int j, int ordem, int m[][ordem])
{
	if (i<ordem)
	{
		if (j<ordem)
		{
			scanf("%d", &m[i][j]);
			j++;
		}
		else
		{
			j = 0;
			i++;
		}
		ler_matriz(i, j, ordem, m);
	}
}
int main()
{
	int i;
	scanf("%d", &i);
	if (i==0)
	{
		printf("Vazia\n");
	}
	int matriz1[i][i], matriz2[i][i];
	ler_matriz(0, 0, i, matriz1);
	ler_matriz(0, 0, i, matriz2);
	somar(0, 0, i, matriz1, matriz2);
	return 0;
}