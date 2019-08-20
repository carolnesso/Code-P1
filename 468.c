#include <stdio.h>

int loop(int i, int v)
{
	if (i!=0)
	{
		double p, pb;//p==preço, pb==preço da black;
		scanf("%lf%lf", &p, &pb);
		if (pb <= p-(p*0.2))
		{
			++v;
		}
		loop(i-1, v);
	}
	else
	{
		printf("%d\n", v);
	}
}
int main()
{
	loop(5, 0);
	return 0;
}