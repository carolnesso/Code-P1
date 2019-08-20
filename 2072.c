#include <stdio.h>

int dir(int n, int x, int y, int d)
{
	if (n>0)
	{
		char m;
		scanf(" %c", &m);
		if (m=='C')
		{
			y = y+1;
		}
		else if (m=='D')
		{
			x = x+1;
		}
		if (x<y)
		{
			cima(n-1, x, y, d+1);
		}
		else dir(n-1, x, y, d);
	}
	else
	{
		printf("%d\n", d);
	}
}
int cima(int n, int x, int y, int d)
{
	if (n>0)
	{
		char m;
		scanf(" %c", &m);
		if (m=='C')
		{
			y = y+1;
		}
		else if (m=='D')
		{
			x = x+1;
		}
		if (x>y)
		{
			dir(n-1, x, y, d+1);
		}
		else cima(n-1, x, y, d);
	}
	else
	{
		printf("%d\n", d);
	}
}
int main(int argc, char const *argv[])
{
	int n;
	char m;
	scanf("%d %c", &n, &m);
	if (m=='C')
	{
		cima(n-1, 0, 1, 0);
	}
	if (m=='D')
	{
		dir(n-1, 1, 0, 0);
	}
	return 0;
}