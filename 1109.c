#include <stdio.h>

int loop(int d, int p, int l, int pdmp, int nlp, int ap, int al)
//pdmp== posicao do dia que mais prod, nlp== numero de linhas prod;
//ap == atingiu meta de prog, al== atingiu meta de linhas;
{
	if (d<=7)
	{
		scanf("%d %d", &p, &l);
		if (p>=5)
		{
			ap = ap+1;
		}
		if (l>=100)
		{
			al= al+1;
		}
		if (l>=nlp)
		{
			pdmp = d;
			nlp= l;
		}
		loop(d+1, p, l, pdmp, nlp, ap, al);
	}
	else
	{
		printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: ", ap, al);
		if (pdmp==1)
		{
			printf("DOMINGO\n");
		}
		if (pdmp==2)
		{
			printf("SEGUNDA\n");
		}
		if (pdmp==3)
		{
			printf("TERCA\n");
		}
		if (pdmp==4)
		{
			printf("QUARTA\n");
		}
		if (pdmp==5)
		{
			printf("QUINTA\n");
		}
		if (pdmp==6)
		{
			printf("SEXTA\n");
		}
		if (pdmp==7)
		{
			printf("SABADO\n");
		}
	}
}
int main()
{
	loop(1, 0, 0, 1, 0, 0, 0);
	return 0;
}