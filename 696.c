#include <stdio.h>

int comparar(int n[], int i, int j, int soma)
{
	if (i<10)
	{
		if (n[i]==j)
		{
			soma++;
		}
		comparar(n, i+1, j, soma);
	}
	else
	{
		printf("%d\n", soma);
	}
}
void loop(int n[], int i)
{
	if (i>=0)
	{
		scanf("%d", &n[i]);
		i--;
		loop(n, i);
	}
	else
	{
		int j;
		scanf("%d", &j);
		comparar(n, 0, j, 0);
	}
}
int main()
{
	int n[10];
	loop(n, 9);
	return 0;
}