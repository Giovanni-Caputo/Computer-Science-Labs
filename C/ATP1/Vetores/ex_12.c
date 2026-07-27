#include <stdio.h>

int main (){
    int minutos;
    int horas;
    
    printf("Digite o tempo em minutos: ");
    scanf("%d", &minutos);

    horas = minutos / 60;

    printf("O tempo em horas e: %d\n", horas);
    
}