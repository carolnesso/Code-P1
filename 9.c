#include <stdio.h>
#include <string.h>

void inverter(char texto[], int i)
{
	if (i!=0)
	{
		printf("%c", texto[i]);
		inverter(texto, i-1);
	}
	if (i==0)
	{
		printf("%c\n", texto[i]);
	}
}
void loop()
{
	int n;
	scanf("%d", &n);
	if (n!=0)
	{
		char texto[n];
		scanf("%s", texto);
		inverter(texto, n-1);
		loop();
	}
}
int main()
{
	loop();
}