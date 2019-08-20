#include <stdio.h>
#include <string.h>

int comparar(char gab[], char resp[])
{
	
}
int checar()
{
	char resp[10];
	int n;
	scanf("%d", &n);
	if (n!=9999)
	{
		scanf("%s", resp);
		checar();
	}
}
int main()
{
	char gab[10], resp[10];
	scanf("%s", gab);
	checar();
	comparar(gab, resp);
	return 0;
}