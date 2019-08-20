#include <stdio.h>

int mdc()
{
	int n, n2;
	scanf("%d %d", &n, &n2);
	if (n%n2!=0)
	{
		mdc();
		printf("%d\n", n%n2);
	}
	else 
	{
		printf("%d\n", n%n2);
	}
}
int main()
{
	mdc();
	return 0;
}