#include <stdio.h>
#include <string.h>

void inverter(char nome[], int i)
{
	if (i>=0)
	{
		printf("%c", nome[i]);
		i--;
		inverter(nome, i);
	}
}
int main()
{
	char nome[255];
	scanf("%s", nome);
	int i = strlen(nome);
	inverter(nome, i-1);
	return 0;
}