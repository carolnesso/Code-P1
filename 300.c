#include <stdio.h>

void loop(int movimentos, int i, int desloc_vert, int desloc_hori)
{
	if (i>movimentos)
	{
		if (desloc_hori<0)
		{
			desloc_hori=(-1)*desloc_hori;
		}
		if (desloc_vert>=200)
		{
			desloc_vert=200;
		}
		if (desloc_hori>=2000)
		{
			desloc_hori=2000;
		}
		printf("%d %d\n", desloc_vert, desloc_hori);
	}
	else
	{
		char n;
		scanf(" %c", &n);
		if (n== 'S')
		{
			desloc_vert +=10;
		}
		if (n=='D')
		{
			desloc_vert-=10;
			if (desloc_vert<0)
			{
				desloc_vert=0;
			}
		}
		if (n=='F')
		{
			desloc_hori+=10;
		}
		if (n=='V')
		{
			desloc_hori+=10;
			desloc_hori = desloc_hori*(-1);
		}
		if (desloc_vert==0)
		{
			desloc_hori=0;
		}
		loop(movimentos, i+1, desloc_vert, desloc_hori);
	}
}
int main()
{
	int movimentos;
	scanf("%d", &movimentos);
	loop(movimentos, 1, 0, 0);
	return 0;
}