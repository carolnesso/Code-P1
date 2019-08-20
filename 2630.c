#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a1, a2, a3;
	printf("Digite o valor do primeiro ângulo:\n");
	scanf("%d", &a1);
	printf("Digite o valor do segundo ângulo:\n");
	scanf("%d", &a2);
	printf("Digite o valor do terceiro ângulo:\n");
	scanf("%d", &a3);
	if (a1==90 || a2==90 || a3==90)
	{
		printf("Este e um triangulo retangulo.\n");
	}
	else if (a1>90 || a2>90 || a3>90)
	{
		printf("Este e um triangulo obtusangulo.\n");
	}
	else if (a1<90 || a2<90 || a3<90)
	{
		printf("Este e um triangulo acutangulo.\n");
	}
	return 0;
}