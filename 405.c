#include <stdio.h>

int condicao(int n)
{
	int c;
	if (n%2==0)
	{
		c = c+1;
		printf("%d\n", c);
		condicao(c);
	}

}
int loop(int n)
{
	scanf("%d", &n);
	if (n<1000)
	{
		loop(n);
		return loop(n);
		condicao(n);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	loop(n);
	return 0;
}