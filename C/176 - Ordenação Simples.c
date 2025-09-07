#include <stdio.h>
#include <stdbool.h>

/* 

sword // trocar de posicao no vetor 
sort // ordena (c++) 
bublleSort 
Selection sort 

*/

void bubbleSort (int *V, int n){ // ponteiro para um vetor de inteiros, tamanho da lista
    bool troca; //booleano, 0 ou 1 (false or true)
    
    do{
        troca = false; 
        
        for(int i=0; i < n-1; i++){
            if(V[i] > V[i+1]){
                int temp = V[i];
                V[i] = V[i+1];
                V[i+1] = temp;
                troca = true;
            }
        }
    } while(troca);
}

int main(){
    
    int casos;
    scanf("%d", &casos);
    
    int numeros[casos];
    for(int i=0; i<casos; i++){
        scanf("%d", &numeros[i]);
    }
    
    bubbleSort(numeros, casos);
    
    for(int i=0; i<casos; i++){
        printf("%d ", numeros[i]);
    }

    return 0; }