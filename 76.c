#include <stdio.h>
#include <string.h>

double corrigir(char gabarito[], char prova[], int limite, int i, int soma)
{
	if (i<limite)
	{
		if (gabarito[i]==prova[i])
		{
			soma++;
		}
		corrigir(gabarito, prova, limite, i+1, soma);
	}
	else
	{
		return soma;
	}
}
void alunos(char gabarito[], double aprovados, int cont)
{
	int id;
	scanf("%d", &id);
	if (id==9999)
	{
		double por = (100*aprovados)/cont;
		printf("%.1lf%%\n", por);
	}
	else
	{
		char prova[10];
		scanf("%s", prova);
		double nota = corrigir(gabarito, prova, 10, 0, 0);
		if (nota>6)
		{
			aprovados++;
		}
		cont++;
		printf("%d %.1lf\n", id, nota);
		alunos(gabarito, aprovados, cont);
	}
}
int main()
{
	char gabarito[10];
	scanf("%s", gabarito);
	alunos(gabarito, 0, 0);
	return 0;
}