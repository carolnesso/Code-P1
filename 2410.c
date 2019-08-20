#include <stdio.h>

int andando(int casas, int dado, int jogadas, int posicao)
{	
	if(dado<=6)
	{
		posicao = dado+posicao;
		if (casas<=posicao)
		{
			posicao = dado+posicao;
			return jogadas;
			if (posicao>casas)
			{
				posicao=dado+posicao;
				andando(casas, dado+1, jogadas+1, 1);
			}
		}
	}
	if(dado>6)
	{
		dado=1;
		posicao = dado+posicao;
		andando(casas, dado+1, jogadas+1, posicao);
	}
	andando(casas, dado+1, jogadas+1, dado);
}
int main()
{
	int casas;
	scanf("%d", &casas);
	int r = andando(casas, 1, 0, 1);
	printf("%d\n", r);
	return 0;
}