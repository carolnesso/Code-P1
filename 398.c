#include <stdio.h>

int multiplos(int n, int n2, int v, int i)
{
	if (i!=50)
	{
		if (i%n==0 && i%n2==0)
		{
			++v;
		}
		multiplos(n, n2, v, ++i);
	}
	else
	{
		printf("%d\n", v);
	}
}
int main()
{
	int n, n2;
	scanf("%d %d", &n, &n2);
	multiplos(n, n2, 0, 1);
	return 0;
}