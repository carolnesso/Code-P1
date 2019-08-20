#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number1, number2, number3;
	scanf("%d %d %d", &number1, &number2, &number3);
	if (number1>number2)
	{
		int aux = number1;
		number1 = number2;
		number2 = aux;
	}
	if (number1>number3)
	{
		int aux = number1;
		number1 = number3;
		number3 = aux;
	}
	if (number2>number3)
	{
		int aux = number2;
		number2 = number3;
		number3 = aux;
	}
	printf("%d\n%d\n%d\n", number3, number2, number1);
	return 0;
}