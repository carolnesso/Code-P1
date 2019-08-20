#include <stdio.h>

int main()
{
	int i, j, cont;
	int cartao_respostas[50];
	int respostas[50];
	printf("Insira o cartao respostas:\n");
	for (i = 0; i < 50; i++)
	{
		scanf("%d", &cartao_respostas[i]);
	}
	printf("Insira as suas respostas:\n");
	for (j = 0; j < 50; j++)
	{
		scanf("%d", &respostas[j]);
	}
	for (i = 0; i < 50; i++)
	{
		//printf("%d,%d\n",respostas[i],cartao_respostas[i] );
		if (cartao_respostas[i]==respostas[i])
		{
			cont++;
		}
	}
	printf("O aluno acertou %d questoes.\n", cont);
	return 0;
}