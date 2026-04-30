#include <stdio.h>

int main()
{
    int matriz [3][4] = {
        { 1, 3, 5, 7},
        { 2, 4, 6, 8},
        { 3, 9, 15, 21}
    };
    
    int i, j;
    
    for(i=0 ; i<3 ; i++) {
        for(j=0 ; j<4 ; j++){
        printf("\n Digite [%d][%d]: ",i ,j);
        scanf("%d", &matriz[i][j]);
            
        }
        printf("\n Proxima linha...");
    }
    
    printf("\n");
    
    for(i=0 ; i<3 ; i++) {
        for(j=0 ; j<4 ; j++){
         printf("%d ", matriz[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}
