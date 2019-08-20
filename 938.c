#include <stdio.h>

void loop(double n, int i, int s)
{
	if (i==5)
	{
		printf("Foram digitados %d numeros negativos\n", s);
		return ;
	}
	else
	{
		++i;
		printf("Digite um valor:\n");
		scanf("%lf", &n);
		if (n<0)
		{
			++s;
		}
	}
	loop(n, i, s);
}
int main()
{
	loop(0,0, 0);
	return 0;
}