#include <stdio.h>

void loop(int n)
{
	if (n<100)
	{
		printf("%d\n", n);
		loop(n+1);
	}
}
int main()
{
	loop(0);
	return 0;
}