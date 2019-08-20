#include <stdio.h>

void intercalar(int n, int txt1[], int txt2[], int i)
{
	if (i<n)
	{
		printf("%d\n%d\n", txt1[i], txt2[i]);
		intercalar(n, txt1, txt2, i+1);
	}
}
void loop(int n, int txt1[], int i)
{
	if (n==i)
	{
		return;
	}
	else
	{
		scanf("%d", &txt1[i]);
		i++;
		loop(n, txt1, i);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int txt1[n], txt2[n];
	loop(n, txt1, 0);
	loop(n, txt2, 0);
	intercalar(n, txt1, txt2, 0);
}