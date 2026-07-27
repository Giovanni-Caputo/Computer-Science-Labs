#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float func_menor_maior(float vetor[], int n, float *maior, float *menor){
    *maior = vetor[0];
    *menor = vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main(){

    float numeros[] = {2.0, 4.0, 5.7, 6.8, 1.3};
    int n = sizeof (numeros) / sizeof (numeros[0]);

    float maior;
    float menor;

    func_menor_maior(numeros, n, &maior, &menor);

    printf("o maior numero é %f e o menor é %f", maior, menor);

    return 0;
}

