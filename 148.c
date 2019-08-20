#include <stdio.h>
#include <string.h>

void contador(char texto[], int i, int posicao, int soma)
{
	if (posicao==i)
	{
		printf("%d\n", soma);
	}
	else
	{
		if (texto[posicao]=='A' || texto[posicao]=='D'||texto[posicao]=='P'||texto[posicao]=='O'||texto[posicao]=='R'||texto[posicao]=='Q')
		{
			soma++;
		}
		if (texto[posicao]=='B')
		{
			soma = 2+soma;
		}
		contador(texto, i, posicao+1, soma);
	}
}
void entrada(int casos)
{
	if (casos==0)
	{
		return ;
	}
	else
	{
		casos--;
		char texto[100];
		scanf("%s", texto);
		int i = strlen(texto);
		contador(texto, i, 0, 0);
		entrada(casos);
	}
}
int main()
{
	int casos;
	scanf("%d", &casos);
	entrada(casos);
	return 0;
}