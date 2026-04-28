#include <stdio.h>

int main()
{
    int numeros[10];
    int i, contPos = 0;
    
    for(i=0 ; i<10 ; i++){
        printf("numeros[%d]: ",i);
        scanf("%d", &numeros[i]);
    }
    
    for(i=0 ; i<10 ; i++){
        printf("numeros [%d] = %.1i \n",i, numeros[i]);
        if(numeros[i] > 0){
            contPos++;
        }
    }
    
    printf("numeros positivos: %d",contPos);
    
    return 0;
}
