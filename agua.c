#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int consumo, total = 7, i;
    
    scanf("%d", &consumo);
    
    for(i = 11; i <= consumo; i++){
        if(i <= 30){
            total++;
        }
        else if(i <= 100){
            total += 2;
        }
        else{
            total += 5;
        }
    }
    
    printf("%d", total);
    
	return 0;
}