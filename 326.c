#include <stdio.h>

void contando(int x, int y, int i, int cont)
{
	if (i<=y)
	{
		if (cont!=1 && cont<=x)
		{
			printf(" ");
		}
		printf("%d", i);
		cont++;
		i++;
		if (cont>x)
		{
			cont = 1;
			printf("\n");
		}
		contando(x, y, i, cont);
	}
}
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	contando(x, y, 1, 1);
	return 0;
}