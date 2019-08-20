#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	int a,i;
	scanf("%d", &n);
	
		for (i = n; i > 1; i--){
			int soma = 0;
			a = i;
			while(a > 0){
				if(i % a == 0){
					soma += a;
					a--;
				}
				else{
					a--;
				}
			}
			if(2*i == soma){
				printf("%d ", i);
			}
		}
	return 0;
}