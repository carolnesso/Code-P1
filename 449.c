#include <stdio.h>
#include <string.h>

int main()
{
	char comida[30], bebida[30];
	gets(comida);
	gets(bebida);
	double f, d;
	if (comida[0]== 'L'|| comida[0]== 'l')
	{
		f = 8.0;
	}
	if (comida[0]== 'E' || comida[0]=='e')
	{
		f= 11.0;
	}
	if (bebida[0]=='R'|| bebida[0]=='r')
	{
		d= 3.0;
	}
	if (bebida[0]=='S'|| bebida[0]=='s')
	{
		d=2.5;
	}
	printf("%.2lf\n", f+d);
	return 0;
}