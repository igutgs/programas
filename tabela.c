#include <stdio.h>

int main()
{
    int linhas, colunas;
    int contColunas = 0, contLinhas = 0;
    
    printf("Digite o numero de Linhas: ");
    scanf("%d", &contLinhas);
    
    
    printf("Digite o numero de Colunas: ");
    scanf("%d", &contColunas);
    
    
    for(linhas = 1; linhas <= contLinhas; linhas++){
        for(colunas = 1; colunas <= contColunas; colunas++){
            printf(" #");
        }
        printf("\n");
    }
    

    return 0;
}
