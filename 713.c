#include <stdio.h>

int loop(int n, int a, int b, int soma)
{
	if (a<=b)
	{
		if (a%n==0)//para ser multiplo, tem que dividir e n ter resto 
		{
			printf("%d\n", a);
			soma = soma +1;/*a soma serve como condição de 
			existencia, pois se a soma for 0, quer dizer que nao 
			existe multiplo*/
		}
		loop(n, a+1, b, soma);
	}
	else
	{
		if(soma==0)
		{
			printf("INEXISTENTE\n");
		}
	}
}
int main()
{
	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	loop(n, a, b, 0);
	return 0;
}