#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if (n%1==0 && n%n==0)
	{
		printf("1\n");
	}
	else 
	{
		printf("0\n");
	}
	return 0;
}