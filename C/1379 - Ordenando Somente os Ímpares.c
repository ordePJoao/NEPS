#include <stdio.h>
#include <stdbool.h>

/* 

sword // trocar de posicao no vetor 
sort // ordena (c++) 
bublleSort 

Selection sort 
    void selectionSort (int *V, int n){ // ponteiro para um vetor de inteiros, tamanho da lista
    int troca, menor;
    
    for (int i=0; i< n-1; i++){
        
        for(int j = i+1; j<n; j++){
            
            if(V[j] < V[i]){ //procura o menor valor do vetor
                menor=j; //guarda a posicao do menor
            }
        }
        
        if( V[i] != V[menor]){
            troca = V[i];
            V[i] = V[menor];
            V[menor] = troca;

        }
    }
}

*/

void selectionSort (int *V, int n){ // ponteiro para um vetor de inteiros, tamanho da lista
    int troca, menorImpar=0, par=0, impar=0;

    for(int i=0; i<n; i++){ //contando quantos pares e impares tem no vetor
        if(V[i] % 2 == 0){
            par++;
        }
        else{
            impar++;
        }
    }

    int VetorPar[par], VetorImpar[impar]; //vetores para guardar os pares e impares
    for(int i=0, j=0, a=0; i<n; i++){
        if(V[i] % 2 == 0){
            VetorPar[j] = V[i];
            j++;
        }
        else{
            VetorImpar[a] = V[i];
            a++;
        }
    }



    for (int i=0; i<impar-1; i++){ //Comparando os impares
        for(int j=i+1; j<impar; j++){

            if(VetorImpar[j] < VetorImpar[menorImpar]){ //procura o menor valor do vetor
                menorImpar = j; //guarda a posicao do menor
            }

        }

        if( VetorImpar[i] != VetorImpar[menorImpar]){
            troca = VetorImpar[i];
            VetorImpar[i] = VetorImpar[menorImpar];
            VetorImpar[menorImpar] = troca;
        }

        menorImpar = i+1; //Apos a iteracao e alocacao completa, comecar do 2* vetor, e assim por diante

    }

    for(int i=0; i<impar; i++){ //colocando os valores impares ordenados no vetor original
        V[i] = VetorImpar[i];
    }
    for(int i=0; i<par; i++){ //colocando os valores pares na sequencia
        V[impar + i] = VetorPar[i];
    }

}



int main(){

    int casos;
    scanf("%d", &casos);

    int numeros[casos];
    for(int i=0; i<casos; i++){
        scanf("%d", &numeros[i]);
    }

    selectionSort(numeros, casos);

    for(int i=0; i<casos; i++){
        printf("%d ", numeros[i]);
    }

    return 0; }