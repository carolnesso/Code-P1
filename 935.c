#include <stdio.h>

int main()
{
	double nota1, nota2, nota3;
	printf("Informe a primeira nota:\n");
	scanf("%lf", &nota1);
	printf("Informe a segunda nota:\n");
	scanf("%lf", &nota2);
	printf("Informe a terceira nota:\n");
	scanf("%lf", &nota3);
	double media;
	media = (nota1+nota2+nota3)/3;
	if (media>=7)
	{
		printf("Aprovado com media %.1lf\n", media);
	}
	else if (media>=5 && media<7)
	{
		printf("Recuperacao com media %.15lf\n", media);
	}
	else
	{
		printf("Reprovado com media %.1lf\n", media);
	}
	return 0;
}