#include <stdio.h>

int loop(int a, int b, int c, int d, int e, int i, int cont)
{
	if (i!=10)
	{
		return 0;
	}
	else
	{
		i++;
		printf("%d\n", i);
		loop(a, b, c,d,e, i, cont);
	}
}
int main(void)
{
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	loop(a, b, c, d, e, 0, 0);
}