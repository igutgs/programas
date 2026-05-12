#include <stdio.h>
#include <string.h>
int main()
{
    char nome [10];
    strcpy(nome,"Ana");
    printf("Olá, %s!\n", nome);
    puts(nome); //imprime e pula linha
    fputs(nome, stdout); // imprime e não pula linha
    fputs(nome, stdout);
    return 0;
}
