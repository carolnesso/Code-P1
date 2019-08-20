#include <stdio.h>

int loop(int l, int c, int stay, int v)
{
	if (l!=0)
	{
		int s, e;
		scanf("%d %d", &s, &e);//s==sai, e==entrou;
		stay = stay-s;
		stay= stay+e;
		if (stay>c)
		{
			++v;
		}
		loop(l-1, c, stay, v);
	}
	else
	{
		if (v>0)
		{
			printf("S\n");
		}
		else
		{
			printf("N\n");
		}
	}
}
int main()
{
	int l, c;//l == leituras, c==capacidade;
	scanf("%d %d", &l, &c);
	loop(l, c, 0, 0);
	return 0;
}