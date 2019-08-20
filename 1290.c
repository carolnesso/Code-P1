#include <stdio.h>

int divi(int n, int c)
{
	if (c>0)
	{
		n=(n%5)+n;
		soma(n, c-1);
	}
	else
	{
		printf("%d\n", n);
	}
}
int soma(int n, int c)
{
	if (c>0)
	{
		divi(n+3, c-1);
	}
	else
	{
		printf("%d\n", n);
	}
}
int main(int argc, char const *argv[])
{
	int n, c;
	scanf("%d %d", &n, &c);
	soma(n, c);
	return 0;
}