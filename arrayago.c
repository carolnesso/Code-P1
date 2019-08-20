#include <stdio.h>

void comparar(int elementos[], int i, int maior, int menor)
{
	if (i>5)
	{
		printf("%d\n%d\n", menor, maior);
	}
	else
	{
		if (elementos [i]>maior)
		{
			maior=elementos[i];
		}
		if (elementos[i]<menor)
		{
			menor = elementos[i];
		}
		i++;
		comparar(elementos, i, maior, menor);
	}
}
void loop(int elementos[], int i)
{
	if (i>=0)
	{
		scanf("%d", &elementos[i]);
		i--;
		loop(elementos, i);
	}
	else
	{
		comparar(elementos, 0, 0, elementos[i]);
	}
}
int main()
{
	int elementos[6];
	loop(elementos, 5);
}