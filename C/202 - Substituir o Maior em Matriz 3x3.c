#include <stdio.h>  
int main() {
    int matriz[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matriz[i][j]);    
        }
    }

    int maior = matriz[0][0];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(matriz[i][j] >= maior){
                maior = matriz[i][j];
            }
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(matriz[i][j] == maior){
                matriz[i][j] = -1;
            }
            printf("%d ", matriz[i][j]);
        }
        
        printf("\n");
    }

return 0; }