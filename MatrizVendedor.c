#include <stdio.h>
#define VEND 2
#define D 2
int main()
{
    double matriz [VEND][D];
    int dia, vendedor;
    double totalVend[4] = {0, 0, 0, 0};
    
    for (vendedor=0 ; vendedor<VEND ; vendedor++){
        for(dia=0 ; dia<D ; dia++){
            printf("Digite o valor do vendendor %d no dia %d: R$", vendedor + 1, dia + 1);
            scanf("%lf", &matriz[vendedor][dia]);
            
        }
            printf("\n");
    }
    
    
    
    for (vendedor=0 ; vendedor<VEND ; vendedor++){
        for(dia=0 ; dia<D ; dia++){
            totalVend[vendedor] = totalVend[vendedor] + matriz[vendedor][dia];
        }
    }
    printf("Total de Vendas: R$ %.2lf \n", totalVend[0]);
    
    for (vendedor=0 ; vendedor<VEND ; vendedor++){
        for(dia=0 ; dia<D ; dia++){
            printf("R$%.2lf  |  ", matriz[vendedor][dia]);
        }
            printf("\n");
    }
    return 0;
}
