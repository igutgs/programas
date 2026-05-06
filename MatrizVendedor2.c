#include <stdio.h>
#define VENDEDOR 4
#define DIA 5
int main()
{
    double vendas[VENDEDOR][DIA];
    double totalDia[DIA] = {0, 0, 0}, totalVendedor[VENDEDOR] = {0,0};
    int i, j;
    int dmaior = 0;
    double total = 0;
   
    printf("========= Sistema de Vendas ========= \n");
    for(i=0; i<VENDEDOR;i++){
        printf("Vendedor %d: \n",i+1);
        for(j=0; j<DIA; j++){
            printf("Digite o valor da venda do dia %d: ",j+1);
            scanf("%lf", &vendas[i][j]);
        }
    }
   
    printf("\n ---- Relatório de Vendas ----\n");
    for(i=0; i<VENDEDOR;i++){
        printf("\nVendedor %d: \n",i+1);
        for(j=0; j<DIA; j++){
            printf("Dia %d: R$ %.2lf ",j+1, vendas[i][j]);
        }
    }    
   
 
    for(i=0; i<VENDEDOR;i++){
        for(j=0; j<DIA; j++){
            totalVendedor[i] = totalVendedor[i] + vendas[i][j];
        }
    } 
    
    for(j=0; j<DIA; j++){
        for(i=0; i<VENDEDOR; i++){
            totalDia[j] = totalDia[j] + vendas[i][j];
        }
    }
    
    for(j=0; j<DIA; j++){
        if(totalDia[j] > totalDia[dmaior])
            dmaior = j;
    }
    
    // Parcial falta fazer funcionar o total de vendas
    printf("\nTotal do Vendedor 1: %.2lf", totalVendedor[0]);
    printf("\nTotal do Vendedor 2: %.2lf", totalVendedor[1]);
    printf("\n----------------------");
    printf("\ndia com maior venda: %d", dmaior+1);
    printf("\nvenda do dia: %.2lf", totalDia[dmaior]);
    
    
    
   
    return 0;
}

