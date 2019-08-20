#include <stdio.h>

int loop(int v, int cap)
{
	int p;
	char t;
	if (v>0)
	{
		scanf("%d %c", &p, &t);
		if (t=='p'|| t=='P')
		{
			cap = cap+ (p*10);
		}
		if (t=='g'||t=='G')
		{
			cap = cap+(p*16);
		}
		loop(v-1, cap);
	}
	else
	{
		printf("%d\n", cap);
		printf("%d\n", (cap*2)/7);
	}
}
int main()
{
	loop(7, 0);
	return 0;
}