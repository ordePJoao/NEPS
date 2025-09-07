#include <stdio.h>

typedef struct{
    int idade;
    double peso;
    double altura;
} Pessoa; //"criado um tipo Pessoa" int x (Pessoa Pessoa_X)

double CalculadorIMC(Pessoa Pessoa_A){
    int IMC;
    IMC = Pessoa_A.peso/(Pessoa_A.altura*Pessoa_A.altura);
    
    return IMC;
    
}

int main(){
    int casos;
    scanf("%d", &casos);
    
    Pessoa Pessoas[casos]; 
    int IMC[casos];
    for(int i=0; i<casos; i++){
        scanf("%d %lf %lf", &Pessoas[i].idade, &Pessoas[i].peso, &Pessoas[i].altura);
        
        IMC[i] = CalculadorIMC(Pessoas[i]);
    }
    
    
    double maiorIMC=0; 
    int j=0;
    for(int i=0; i<casos; i++){
        if(i==0){
            maiorIMC = IMC[i];
        }
        
        if(IMC[i] > maiorIMC){
            maiorIMC = IMC[i];
            j=i;
        }
    }
    
    printf("A pessoa com o maior IMC tem %d anos\n", Pessoas[j].idade);
    
    
    
return 0; }