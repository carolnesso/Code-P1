#include <stdio.h>

int calcula(int i, int contador)
{
	if (i==1)
	{
		return contador+1;
	}
	else
	{
		if (i%2==0)
		{
			i = i/2;
		}
		else
		{
			i = (i*3)+1;
		}
		contador++;
		calcula(i, contador);
	}
}
int intervalo(int i, int j, int maior_resultado, int save, int pos)
{
	if (i<=j)
	{
		int resultado=calcula(i, 0);
		if (resultado>maior_resultado)
		{
			maior_resultado=resultado;
		}
		intervalo(i+1, j, maior_resultado, save, pos);
	}
	else
	{
		if(pos==0)
		{
			printf("%d %d %d\n",j, save, maior_resultado );
			return 0;
		}
		printf("%d %d %d\n", save, j, maior_resultado);
	}
}
int loop()
{
	int i, j;
	if (scanf("%d %d", &i, &j)== EOF)
	{
		return 0;
	}
	else 
	{
		if (i>j)
		{
			intervalo(j, i, 0, j,0);
		}
		else
		{
			intervalo(i, j,0,i,1);	
		}
		loop();
	}
}
int main()
{
	loop();
	return 0;
}