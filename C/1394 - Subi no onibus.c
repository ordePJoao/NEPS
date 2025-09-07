#include <stdio.h>
#include <stdlib.h>

int Compara(char *p) {
    char palavraInvertida[55];
    strcpy(palavraInvertida, p); //(palavraInvertida = palavra)

    int inicio = 0; // Índice do primeiro caractereint inicio = 0;
    int fim = strlen(palavraInvertida) - 1; // strlen: faz a contagem de caracteres 
    //Obter o índice do último caractere

    while (inicio < fim) {
        char temp ;
        temp = palavraInvertida[inicio];
        palavraInvertida[inicio] = palavraInvertida[fim];
        palavraInvertida[fim] = temp;

        // Mover os índices para o centro da palavra
        inicio++;
        fim--;
    }

    int ehIgual;
    ehIgual = strcmp(p, palavraInvertida); //strcmp compara duas strings  tamanho(tabela ASCII)

    if(ehIgual == 0) {
        return 1; // É palíndromo
    }

    else {
        return 0; // Não é palíndromo
    }

}

int main(){
    char palavra[55];
    fgets(palavra, 55, stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; //remover o \n do final da string e subistitui por \0 (final da string)

    int resultado = Compara(palavra);
    if(resultado == 1){
        printf("eh palindromo\n");
    }
    else{
        printf("nao eh palindromo\n");
    }

return 0; }