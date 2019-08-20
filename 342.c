#include <stdio.h>

int loop(int n, int s, int d)
{
	if (d==0)
	{
		if (s==0)
		{
			printf("O numero nao possui divisores multiplos de 3!\n");
			return 0; 
		}
		printf("%d\n", s);
		return 0;
	}
	if (n%d==0)
	{
		if (d%3==0)
		{
			s = s+1;
		}
	}
	loop(n, s, d-1);
	return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	loop(n, 0, n);
	return 0;
}