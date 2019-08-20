#include <stdio.h>

void ordenar(int niveis, int fases[], int estatico, int dinamico)
{
	for (;estatico<niveis; estatico++)
	{
		for (; dinamico<niveis-1; dinamico++)
		{
			if (fases[dinamico]>fases[dinamico+1])
			{
				int aux = fases[dinamico];
				fases[dinamico]= fases[dinamico+1];
				fases[dinamico+1]= aux;
			}
		}
	}
}
int main()
{
	int niveis, amigos, fases_q_faz, i, c;
	scanf("%d %d", &niveis, &amigos);
	int fases[niveis];
	for (i = 0; i < niveis; ++i)
	{
		fases[i]=0;
	}
	for (i = 0; i < amigos; ++i)
	{
		scanf("%d", &fases_q_faz);
		for (c = 0; c < fases_q_faz; ++c)
		{
			int num;
			scanf("%d", &num);
			fases[num-1]++;
		}
	}
	ordenar(niveis, fases,0,0);
	printf("The %d friends could finish the game %d times\n", amigos,fases[0]);
	return 0;
}