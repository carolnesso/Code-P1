#include <stdio.h>

int comparar(int i, int j, int array[])
{
	if (i<10)
	{
		if (j<10-1)
		{
			if (array[i]<array[j+1])
			{
				int aux = array[i];
				array[i]=array[j+1];
				array[j+1] = aux;
			}
			j++;
		}
		else
		{
			j=0;
			i++;
			printf("%d\n", array[i]);
			comparar(i, j, array);
		}
	}
}
int ler_array(int i, int array[])
{
	if (i<10)
	{
		scanf("%d", &array[i]);
		i++;
		ler_array(i, array);
		comparar(0, 0, array);
		printf("%d\n", array[i-1]);
	}
}
int main()
{
	int array[10], i;
	ler_array(0, array);
	return 0;
}