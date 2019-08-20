#include <stdio.h>

int main()
{
	double nota1, nota2, nota3;
	scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
	double media = (nota1+nota2+nota3)/3;
	if (media>=7)
	{
		printf("aprovado\n");
	}
	else if (media>=3 || media<7)
	{
		printf("prova final\n");
	}
	else
	{
		printf("reprovado\n");
	}
	return 0;
}