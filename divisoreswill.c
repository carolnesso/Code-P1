#include<stdio.h>

void dividores(int i, int n)
{
	if (i > n)
	{
		return;
	}
	else
	{
		if (n % i == 0)
		printf("%d\n", i);
	}		
	dividores(i + 1, n);
}

int main()
{
	int n;
	scanf("%d", &n);
	dividores(1, n);
}