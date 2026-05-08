#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    
    printf("Digite seu nome completo:");
    fgets(nome, sizeof(nome), stdin);
    
    printf("\nOlá, %s", nome);
    nome[strcspn(nome, "\n")] = '\0';
    
    printf("\nDigitando: %s", nome);
    
    return 0;
}
