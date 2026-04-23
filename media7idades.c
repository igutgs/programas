#include <stdio.h>

int main()
{
  double id, soma=0,med=0;
  int cont;
  
  for(cont=1; cont<=7; cont++){
      printf("\ndigite a %d idade: ", cont);
     scanf("%lf",&id);
     soma=soma+id;
      
  }
  
  med=soma/7;
  printf("\na media é: %.2lf", med);
  
  
  
    return 0;
}
