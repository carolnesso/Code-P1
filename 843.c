#include <stdio.h>
#include <string.h>

void contagem(char texto[], int i, int contador)
{
	if (i==-1)
	{
		printf("%d\n", contador);
	}
	else
	{
		if (texto[i]==' ' && i!=0 && texto[i-1]!=' ')
		{
			contador++;
		}
		i--;
		contagem(texto, i, contador);
	}
}
int main()
{
	char texto[500];
	scanf("%[^\n]", texto);
	int i = strlen(texto);
	contagem(texto, i-1, 1);
	return 0;
}