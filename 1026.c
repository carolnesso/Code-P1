#include <stdio.h>

int main()
{
	double array[100];
	int i, soma_cred=0, soma_deb=0, saldo=0;
	for (i = 0; i<105 ; ++i)
	{
		scanf("%lf", &array[i]);
		soma_cred++;
	}
	printf("%d\n", soma_cred);
	return 0;
}