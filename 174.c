#include <stdio.h>

int main()
{
	int n; //n==consumo em m3
	int v; //v==valor
	scanf("%d", &n);
	if (n<=10)
	{
		v= 7; 
	}
	if (n>10 && n<=30)
	{
		v= ((n*1)+7);
	}
	if (n>30 && n<=100)
	{
		v= ((n*2)+20); 
	}
	printf("%d\n", v);
return 0;
}