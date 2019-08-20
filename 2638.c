#include <stdio.h>

int main()
{
	printf("Digite o pH da solucao:\n");
	int ph;
	scanf("%d", &ph);
	if (ph>0 && ph<14)
	{
		if (ph<7)
		{
			printf("Essa solucao e acida.\n");
		}
		if (ph>7)
		{
			printf("Essa solucao e basica.\n");
		}
		if (ph==7)
		{
			printf("Essa solucao e neutra.\n");
		}
	}
	else
	{
		printf("Valor deve estar entre 0 e 14.\n");
	}
	return 0;
}