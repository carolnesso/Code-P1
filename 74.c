#include <stdio.h>

void comparar(int inteiros[], int i, int x)
{
	if (i>99)
	{
		return ;
	}
	else
	{
		if (inteiros[i]==x)
		{
			printf("%d\n", i);
		}
		i++;
		comparar(inteiros, i, x);
	}
}
void loop(int inteiros[], int i)
{
	if (i>99)
	{
		int x;
		scanf("%d", &x);
		comparar(inteiros, 0, x);
	}
	else
	{
		scanf("%d", &inteiros[i]);
		i++;
		loop(inteiros, i);
	}
}
int main()
{
	int inteiros[100];
	loop(inteiros, 0);
}