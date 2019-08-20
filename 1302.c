#include <stdio.h>

int main()
{
	int matriz[3][3], i, j, cont2 =0, menor_n = 1000000, soma=0;
	double cont;
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			scanf("%d", &matriz[i][j]);
			if (matriz[i][j]>0)
			{
				cont+= matriz[i][j];
				cont2++;
			}
			if (matriz[i][j]< menor_n)
			{
				menor_n = matriz[i][j];
			}
		}
	}
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			if (i!=j)
			{
				soma+= matriz[i][j];
			}
		}
	}
	double media = cont/cont2;
	printf("%.2lf ", media);
	printf("%d ", menor_n);
	if (menor_n%2==0)
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	printf("%d\n", soma);
	return 0;
}