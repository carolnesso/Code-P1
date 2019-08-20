#include <stdio.h>

int main()
{
	double s, ns;//s== salario && ns== novo salario
	scanf("%lf", &s);
	if (s>500)
	{
		ns= (s*0.1)+s;	
	}
	if (s<=300)
	{
		ns= (s*0.05)+s;
	}
	if (s>300 && s<=500)
	{
		ns= (s*0.07)+s;
	}
	printf("%.2lf\n", ns);
	return 0;
}