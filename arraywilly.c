#include <stdio.h>

void loop(int i, int n, int array[])
{
    if (i < n)
    {
        scanf("%d", &array[i]);
        loop(i+1, n, array);
    }

    /**if (i == n)
    {
        return;
    }
    else 
    {
        scanf("%d", &array[i]);
        loop(i+1, n, array);
    }*/
}

void imprimir(int i, int n, int array[])
{
    if (i < n)
    {
        printf("%d\n", array[i]);
        imprimir(i+1, n, array);
    }
    /*if (i == n)
    {
        return;
    }
    else 
    {
        printf("%d\n", array[i]);
        imprimir(i+1, n, array);
    }*/
}

int main()
{
    int array[5];

    loop(0, 5, array);

    imprimir(0, 5, array);
    
    return 0;
}