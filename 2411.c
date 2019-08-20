#include <stdio.h>

void separando(int k, int x, int indice, int resultado)
{
	if (indice<=k)
	{
		if (/* condition */)
		{
			/* code */
		}
		separando(k, x, indice+1, resultado);
	}
	else
	{
		if (x<=9)
		{
			resultado = x;
		}
		printf("%d\n", resultado);
	}
}
void loop(int atividades, int i)
{
	if (i<=atividades)
	{
		int k, x;//x seria quantas vezes deve repetir;
		scanf("%d %d", &k, &x);
		separando(x, y, 1);
		loop(atividades, i+1);
	}
}
int main()
{
	int atividades;
	scanf("%d", &atividades);
	loop(atividades, 1);
	return 0;
}