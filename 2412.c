#include <stdio.h>

void comparar(int n_ideia, int extrava_p, int casos[], int i_estatico, int i_dinamico)
{
	if (i_estatico<n_ideia)
	{
		if (i_dinamico<n_ideia)
		{
			if (casos[i_estatico]+casos[i_dinamico]==extrava_p)
			{
				printf("SIM\n");
				return ;
			}
			i_dinamico++;
		}
		else
		{
			i_estatico++;
			i_dinamico = i_estatico+1;
		}
		comparar(n_ideia, extrava_p, casos, i_estatico, i_dinamico);
	}
	else
	{
		printf("NAO\n");
	}
}
void loop(int n_ideia, int extrava_p, int casos[], int i)
{
	if (i<n_ideia)
	{
		scanf("%d", &casos[i]);
		i++;
		loop(n_ideia, extrava_p, casos, i);
	}
}
int main()
{
	int n_ideia, extrava_p;
	scanf("%d %d", &n_ideia, &extrava_p);
	int casos[n_ideia];
	loop(n_ideia, extrava_p, casos, 0);
	comparar(n_ideia, extrava_p, casos, 0, 0);
	return 0;
}