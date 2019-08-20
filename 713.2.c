#include <stdio.h>

int loop(int numero, int a, int b, int i)
{
	if (a>b)
	{
		if (i==0)
		{
			printf("INEXISTENTE\n");
		}
	}
	else
	{
		if (a%numero==0)
		{
			i++;
			printf("%d\n", a);
		}
		loop(numero, a+1, b, i);
	}
}
int main()
{
	int numero, a, b;
	scanf("%d %d %d", &numero, &a, &b);
	loop(numero, a, b, 0);
	return 0;
}