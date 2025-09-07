#include <stdio.h>
#include <math.h>

int main() {
    int Nraizes;

    scanf("%d", &Nraizes);

    double Raizes[Nraizes];
    for(int i=0; i<Nraizes; i++){
        scanf("%lf", &Raizes[i]);
        Raizes[i] = sqrt(Raizes[i]); // Raiz quadrada
    }

    for(int i=0; i<Nraizes; i++){
        printf("%.4lf\n", Raizes[i]);
    }

return 0; }