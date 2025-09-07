#include <stdio.h>

int main() {
    
    int casos;
    scanf("%d", &casos);

    int campo[casos+2], resposta[casos]; campo[0] = 0; campo[casos+1] = 0; //criando campo zero e campo extra-final para comparacao no for
    for(int i=1; i<=casos; i++){
        scanf("%d", &campo[i]);
    }

    for(int i=1; i<=casos; i++){ //Percorre o vetor de casos
        for(int j=0; j<3; j++){//Percorre as "extremidades" do primeiro vetor

            resposta[i-1] = 0; 

            if(campo[i-1] == 1){
                resposta[i-1] += 1;
            }

            if(campo[i] == 1){
                resposta[i-1] += 1;
            }

            if(campo[i+1] == 1){
                resposta[i-1] += 1;
            }
        }   
    }   

    for(int i=0; i<casos; i++){
        printf("%d\n", resposta[i]);
    }

return 0; }