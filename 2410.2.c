#include <stdio.h>

int andando(int casas, int dado, int jogadas, int posicao)
{	
	posicao=dado+posicao;
	if(posicao==casas)
	{
		return jogadas;
	}
	else
	{
		if (dado>6 || posicao>casas)
		{
			dado=1;
			posicao= (posicao-casas);
			andando(casas, dado+1, jogadas+1, posicao+dado);
		}
		else
		{
			andando(casas, dado+1, jogadas+1, posicao+dado);
		}
	}
}
int main()
{
	int casas;
	scanf("%d", &casas);
	int r = andando(casas, 1, 0, 1);
	printf("%d\n", r);
	return 0;
}