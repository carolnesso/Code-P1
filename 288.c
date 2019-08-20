#include <stdio.h>

int main()
{
	//resq 1 == int.gra || IA;
	//resq 2 == encapsuluu && identacao
	//resq 3 == uso de structs
	int work[5], i, cont;
	for (i = 0; i < 5; ++i)
	{
		scanf("%d", &work[i]);
	}
		cont = 0;
		if (work[0]==1 || work[1]==1)
		{
			cont+=1;
		}
		else
		{
			cont = 0;
			printf("0\n");
			return 0;
		}
		if (work[2]==1 && work[3]==1)
		{
			cont+=1;
		}
		else
		{
			cont = 0;
			printf("0\n");
			return 0;
		}
		if (work[4]==1)
		{
			cont+=1;
		}
		else
		{
			cont = 0;
			printf("0\n");
			return 0;
		}
	if (cont>0)
	{
		printf("AVALIADO\n");
	}
	return 0;
}