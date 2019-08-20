#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Digite o pH da solucao:\n");
	double ph;
	scanf("%lf", &ph);
	if (ph>0 && ph<14)
	{
		if (ph<7)
		{
			printf("Solucao acida.\n");
		}
		if (ph>7)
		{
			printf("Solucao basica.\n");
		}
		if (ph==7)
		{
			printf("Solucao neutra.\n");
		}
	}
	else
	{
		printf("Valor do pH deve estar entre 0 e 14.\n");
	}
	return 0;
}