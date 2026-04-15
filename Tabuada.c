#include <stdio.h>
#include <stdlib.h>
//#include <>
int main() {

    int tabuada, contador, v1;

    printf("Digite um número: ");
    scanf("%d", &v1);
    
    printf("\n\nTabuada do %d \n", v1);
    
    for(contador = 0; contador <=10; contador++){
      printf("%d x %d = %d \n",v1, contador, contador*v1);
    }
    return 0;
}
