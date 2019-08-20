#include <stdio.h>
#include <string.h>

int contando(int cont, char frutas[], int i, int espaco)
{
	if (i<cont)
	{
		if (frutas[i]==' ')
		{
			espaco++;
		}
		contando(cont, frutas, i+1, espaco);
	}
	else
	{
		return espaco+1;
	}
}
void entrada(int testes, int i, int cont, double soma, double g_total)
{
	if (i<=testes)
	{
		double gastos;
		char frutas[100];
		scanf("%lf\n", &gastos);
		fgets(frutas,100,stdin);
		//printf("%.2lf\n", gastos);
		cont = strlen(frutas);
		int e = contando(cont-1, frutas, 0, 0);
		//printf("%s", frutas);
		//printf("%d\n", cont);
		g_total+=gastos;
		soma+=e;
		printf("dia %d: %d kg\n", i, e);
		entrada(testes, i+1, cont, soma, g_total);
	}
	else
	{
		double media;
		double media_v;
		media = soma/(i-1);
		media_v = g_total/(i-1);
		printf("%.2lf kg por dia\n", media);
		printf("R$ %.2lf por dia\n", media_v);
	}
}
int main()
{
	int testes;
	scanf("%d\n", &testes);
	entrada(testes, 1, 0, 0, 0);
	return 0;
}