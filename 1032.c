#include <stdio.h>

int tocas(int rodando[][2], int i)
{
	if (rodando[i][1]==-1)
	{
		return 1;
	}
	else
	{
		rodando[i][1] = -1;
		i = rodando[i][0];
		tocas(rodando, i);
	}
}
void proxima(int n_de_buracos, int i, int soma, int rodando[][2])
{
	if (i<n_de_buracos)
	{
		if (rodando[i][1]==0)
		{
			soma+=tocas(rodando, i);
		}
	    i++;
		proxima(n_de_buracos, i, soma, rodando);
	}
	else
	{
		printf("%d\n", soma);
	}
}
void loop(int n_de_buracos, int rodando[][2], int i)
{
	if (i<n_de_buracos)
	{
		scanf("%d", &rodando[i][0]);
		rodando[i][1] = 0; 
		loop(n_de_buracos, rodando, i+1);
	}
}
int main()
{
	int n_de_buracos;
	scanf("%d", &n_de_buracos);
	int rodando[n_de_buracos][2];
	loop(n_de_buracos, rodando, 0); 
	proxima(n_de_buracos, 0, 0, rodando);
	return 0;
}