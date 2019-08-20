#include <stdio.h>

int fat(int x)
{
	if (x==0 || x==1)
	{
		return 1;
	}
	else
	{
		return x*fat(x-1);
		
	}
}
int loop()
{
	int x;
	scanf("%d", &x);
	if (x!=-1)
	{
		fat(x);
		printf("%d\n", fat(x));
		loop();
	}
	else
	{
		return 0;
	}

}
int main()
{
	int x;
	loop();
	return 0;
}