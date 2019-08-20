#include <stdio.h>

void comparar(int inteiros[], int i, int save, int maior, int menor)
{
	if (i<save)
	{
		if (inteiros[i]>maior)
		{
			maior=inteiros[i];
		}
		if (inteiros[i]<menor)
		{
			menor=inteiros[i];
		}
		comparar(inteiros, i+1, save, maior, menor);
	}
	else
	{
		printf("%d\n%d\n", menor, maior);
	}
}
void loop(int inteiros[], int i, int save)
{
	if (i>=0)
	{
		scanf("%d", &inteiros[i]);
		i--;
		loop(inteiros, i,save);
	}
	else
	{
		comparar(inteiros, 0, save, 0, inteiros[0]);
	}
}
int main()
{
	int inteiros[6];
	loop(inteiros, 5, 6);
	return 0;
}