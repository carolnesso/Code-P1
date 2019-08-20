#include <stdio.h>
#include <string.h>

void comparar(char texto[], int cont, char x, int i)
{
	if (cont==-1)
	{
		printf("%d\n", i);
	}
	else
	{
		if (texto[cont]==x)
		{
			i++;
		}
		cont--;
		comparar(texto, cont, x, i);
	}
}
int main()
{
	char texto[50];
	scanf("%s", texto);
	int cont = strlen(texto);
	char x;
	scanf(" %c", &x);
	comparar(texto, cont-1, x, 0);
	return 0;
}