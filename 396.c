#include <stdio.h>

int loop(int c, double v, double s, int i)
{
	scanf("%d", &c);
	if (c==999)
	{
		printf("%.2lf\n%d\n", s, i);
		return 0;
	}
	else
	{
		if (c>2)
		{
			++i;
			v = (c-2)*12.89;
			s = v+s;
		}
	}
	loop(c, v, s, i);
}
int main()
{//c== numero de carros por casa;
	loop(0, 0, 0, 0);
	return 0;
}