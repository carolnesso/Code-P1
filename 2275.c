#include <stdio.h>

void sub(int n, int array[], int subtracao, int i)
{
	if (array[i]+n==array[n-1])
	{
		subtracao= (array[i]+n)+1;
	}
	if (array[i]+n>array[n-1])
	{
		subtracao= (array[i]+n)-1;
	}
	if (array[i]+n<array[n-1])
	{
		subtracao= (array[i]+n);
	}
	printf("%d\n", subtracao);
}
int main()
{
	int n, i;
	scanf("%d", &n);
	int array[n];
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &array[i]);
	}
	sub(n, array,0, 0);
	return 0;
}