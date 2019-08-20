#include <stdio.h>

int main()
{
	int b, r, diasestilosos, diascommeia;
	scanf("%d %d", &b, &r);
	if (b>=r)
	{
		diasestilosos = ((b+r)-(b-r))/2;
		diascommeia = (b-r)/2;
	}
	else
	{
		diasestilosos = ((b+r)-(r-b))/2;
		diascommeia = (r-b)/2;	
	}
	printf("%d %d\n", diasestilosos, diascommeia);
	return 0;
}