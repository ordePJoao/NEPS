#include <stdio.h>
#include <string.h>

int main() {

    int Nquest;
    scanf("%d", &Nquest);

    char gabarito[Nquest+1], resposta[Nquest+1]; // +1 pro '\0'    scanf("%s", gabarito);
    scanf("%s", gabarito);
    scanf("%s", resposta);

    int acertos=0;
    for(int i=0; i<Nquest; i++){
        if(gabarito[i] == resposta[i]){ //strcmp compara ate o '\0' e retorna 0 se forem iguais
            acertos++;
        }
    }

    printf("%d\n", acertos);

return 0; }