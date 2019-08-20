#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, i, j, aux;
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		aux = 0;
		for (j = 0; j <= i; ++j)
		{
			aux = j+1;
			printf("%d", aux);
			if(j<i)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}