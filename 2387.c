#include <stdio.h>

int main()
{
	int a, v, e, m;// e== m. estilosas, m== dia com meias
	scanf("%d %d", &a, &v);
	if (a>=v)
	{
		e= ((a+v)-(a-v))/2;
		m= (a-v)/2;
	}
	else
	{
		e= ((a+v)-(v-a))/2;
		m= (v-a)/2;
	}
	printf("%d %d\n", e, m);
	return 0;
}