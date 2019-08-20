#include <stdio.h>

void loop(int maior)
{
	int n;
	scanf("%d", &n);
	if (n>maior)
	{
		maior=n;
	}
	if (n!=0)
	{
		loop(maior);
	}
	else
	{
		printf("%d\n", maior);
	}
}
int main()
{
	loop(0);
	return 0; 
}