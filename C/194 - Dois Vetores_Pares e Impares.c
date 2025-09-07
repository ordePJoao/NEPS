#include <stdio.h>

int main(){
    
    int vet[10], i;

    for( i=0; i<10; i++){
        int temp=0;
        scanf("%d", &vet[i]);
        
    }
    
    for( i=0; i<10; i++){
        
        if( vet[i]%2 == 0 ){
            printf("%d ", vet[i]);
        }
        
    }
    
    printf("\n");
    
    for( i=0; i<10; i++){
        
        if( vet[i]%2 != 0 ){
            printf("%d ", vet[i]);
        }
        
    }


return 0; }