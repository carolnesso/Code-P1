#include <stdio.h>

int main()
{
	double a, e1, p1, e2, p2, e3, p3;
	scanf("%lf%lf%lf%lf%lf%lf%lf", &a, &e1, &p1, &e2, &p2, &e3, &p3);
	p1 = e1*p1;
	p2 = e2*p2;
	p3 = e3*p3;
	float v, vd;//vd==v/20;
	v = p1+p2+p3+a;
	vd = v/21;
	printf("%.2lf\n%.2lf\n", v, vd);
	return 0;
}