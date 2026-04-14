// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int contador = 0;
    char resposta;
    
    printf("\n ==================================");
    printf("\n =========    DETETIVE    =========");
    printf("\n ==================================");
    
        
        printf("\n Telefonou para a vítima?");
        scanf(" %c", &resposta);
        if(resposta == 's' || resposta == 'S'){
            contador++;
        }
        
        printf("\n Esteve no local do crime?");
        scanf(" %c", &resposta);
        if(resposta == 's' || resposta == 'S'){
            contador++;
        }
        
        printf("\n Mora perto da vítima?");
        scanf(" %c", &resposta);
        if(resposta == 's' || resposta == 'S'){
            contador++;
        }  
        
        
        printf("\n Devia para a vítima?");
        scanf(" %c", &resposta);
        if(resposta == 's' || resposta == 'S'){
            contador++;
        }
        
        
        printf("\n Trabalhou com a vítima?");
        scanf(" %c", &resposta);
        if(resposta == 's' || resposta == 'S'){
            contador++;
        }
        
        if(contador <2  ){
            printf("inocente");
        }
        
        if(contador ==2){
            printf("suspeitos");
        }
        
        if(contador > 2 && contador < 5){
            printf("cumplice");
        }
        
        else{
            printf("assassino");
        }

        
        printf("\n pontos: %d", contador);
        
    
}