#include <stdio.h>

typedef struct{
    int idade;
    double peso;
    double altura;
} Pessoa; //"criado um tipo Pessoa" int x (Pessoa Pessoa_X)

int CalculadorIMC(Pessoa Pessoa_A){
    int IMC;
    IMC = Pessoa_A.peso/(Pessoa_A.altura*Pessoa_A.altura);
    
    if(IMC < 17.9){
        return 0; //baixo peso
    }
    
    else if(IMC > 18.0 && IMC < 24.9){
        return 1; //peso adequado
    }
    
    else if(IMC > 25.0 && IMC < 29.9){
        return 2; //sobrepeso
    }
    
    else if(IMC > 30.0 && IMC < 34.9){
        return 3; //obesidade grau 1
    }
    
    else if(IMC > 35.0 && IMC < 39.9){
        return 4; //obesidade grau 2
    }
    
    else{
        return 5; //obesidade grau 3
    }
    
}

int main(){
    Pessoa Pessoa_A;
    scanf("%d %lf %lf", &Pessoa_A.idade, &Pessoa_A.peso, &Pessoa_A.altura);
    
    int faixas;
    faixas = CalculadorIMC(Pessoa_A);
    
    switch(faixas){
        case 0:
            printf("baixo peso\n");
        break;
        case 1:
            printf("peso adequado\n");
        break;
        
        case 2:
            printf("sobrepeso\n");
        break;
        
        case 3:
            printf("obesidade grau 1\n");
        break;
        
        case 4:
            printf("obesidade grau 2\n");
        break;
        
        case 5:
            printf("obesidade grau 3\n");
        break;
    }
    
return 0; }