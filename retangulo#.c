#include <stdio.h>

int main()
{
  int li, co;
  int cont1,cont2;
  
  printf("digite a qtd de linhas:  ");
  scanf("%d",&li);
  
  printf("digite a qtd de colunas:  ");
  scanf("%d",&co);
  
  for(cont1=1; cont1<=li; cont1++){
      printf("\n");
      
        for(cont2=1; cont2<=co; cont2++){
            if (cont1 == 1 || cont1 == li || 
              cont2 == 1 || cont2 == co){
                printf("# ");  
            }
            else{
                printf("  ");
            }
        
        }
     }

    return 0;
}
