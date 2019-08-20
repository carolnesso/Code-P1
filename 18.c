#include <stdio.h>

int checar_notas(int n, double vetor_notas[], int i, int j, int cont, double num, int aux, double var)
{
	if (i<n)
	{
		if (j<n)
		{
			if (vetor_notas[i]==vetor_notas[j])
			{
				cont++;
				j++;
				num = vetor_notas[i];
				checar_notas(n, vetor_notas, i, j, cont, num, aux, var);
			}
			else
			{
				//printf("frequencia: %d\n", cont);
				j++;
				checar_notas(n, vetor_notas, i, j, cont, num, aux, var);
			}
		}
		else
		{
			i++;
			j = i+1;
			if (cont>aux)
			{
				aux = cont;
				var = num;
			}
			cont = 1;
			checar_notas(n, vetor_notas, i, j, cont, num, aux, var);
		}
		// checar_notas(n, vetor_notas, i+1, j, cont);
	}
	else
	{
		printf("A moda foi:%.1lf\nA frequencia foi:%d\n", var, aux);
	}
}
int main()
{
	int n, i;
	printf("Escreva o numero de notas:\n");
	scanf("%d", &n);
	double vetor_notas[n];
	printf("Escreva a lista de notas:\n");
	for (i= 0; i < n; ++i)
	{
		scanf("%lf", &vetor_notas[i]);
	}
	checar_notas(n, vetor_notas, 0, 1, 0, 0, 0, 0);
	return 0;
}