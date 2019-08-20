#include <stdio.h>

int loop(int x, int y)
{
	if (x%y==0)
	{
		return y;
	}
	else 
	{
		loop(y, x%y);
	}
}
int entrada(int x)
{
	if (x>0)
	{
		int a,b ;
		scanf("%d %d", &a, &b);
		int mdc=loop(a,b);
		printf("MDC(%d,%d) = %d\n",a,b,mdc);
		entrada(x-1);
	}
}
int main()
{
	int x;
	scanf("%d", &x);
	entrada(x);	
	return 0;
}