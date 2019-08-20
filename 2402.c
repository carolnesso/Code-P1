#include <stdio.h>

void loop(int d, int i, int num, int seq, int maior_seq, int soma, int maior_soma)
{
	if (d==i)
	{
		printf("%d\n", maior_soma);
	}
	else
	{
		i++;
		int n;
		scanf("%d", &n);
		if (n>num)
		{
			seq++;
			soma = soma + n;
		}
		else
		{
			if (seq>maior_seq)
			{
				maior_seq = seq;
				maior_soma = soma;
				soma= n;
				seq=1;
			}
			else
			{
				soma = n;
			}
		}
		
		loop(d, i, n, seq, maior_seq, soma, maior_soma);
	}
}
int main(int argc, char const *argv[])
{
	int d;
	scanf("%d", &d);
	loop(d, 1, 0, 0, 0, 0, 0);
	return 0;
}