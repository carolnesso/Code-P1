#include <stdio.h>

void inverter_p(int n, int matriz[][n], int i, int j)
{
	for (i = 0; i <= n; ++i)
	{
		for (j = 0; j <= n; ++j)
		{
			if (i==j)
			{
				int aux = i;
				matriz[i][j] = matriz[n-aux][n-aux];
				matriz[n-aux][n-aux] = matriz[aux][aux];
				printf("%d\n", matriz[n-aux][n-aux]);
			}
		}
	}
}
int main()
{
	int n,i,j;
	scanf("%d", &n);
	int matriz[n][n];
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	inverter_p(n-1, matriz, i, j);
	/*multiplicar_s(n, matriz, 0, 0);
	transpor(n, matriz, 0, 0);*/
	return 0;
}