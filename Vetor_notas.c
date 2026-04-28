#include <stdio.h>

int main()
{
    double notas[5];
    int i;
    
    for(i=0 ; i<5 ; i++){
        printf("Notas[%d]: ",i);
        scanf("%lf", &notas[i]);
    }
    
    for(i=0 ; i<5 ; i++){
        printf("notas [%d] = %.1lf \n",i, notas[i]);
    }
    
    return 0;
}
