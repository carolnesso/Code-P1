#include <stdio.h>

int main()
{
    double minutos, div;
    scanf("%lf", &minutos);
    div = (60/minutos)*8;
    printf("%.0lf\n", div);
    return 0;
}