#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double funcao_euclid(double x1, double x2, double y1, double y2){
   
    double dx = x2 - x1;
    double dy = y2 - y1;
   
    double distanciaQuadrada = dx * dx + dy * dy;
   
    return sqrt(distanciaQuadrada);
   
    }

int main(){
   
    double x1, x2, y1, y2;
   
    printf("Digite o valor de x1: ");
    scanf("%lf", &x1);
   
    printf("Digite o valor de x2: ");
    scanf("%lf", &x2);
   
    printf("Digite o valor de y1: ");
    scanf("%lf", &y1);
   
    printf("Digite o valor de y2: ");
    scanf("%lf", &y2);
   
    double distancia = funcao_euclid(x1, x2, y1, y2);
   
    printf("A distância euclidiana entre os pontos é: %.2lf\n", distancia);


    return 0;
}
