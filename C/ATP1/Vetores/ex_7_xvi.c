//Leia o tempo de duração de um evento em uma fábrica em segundos e imprima-o em horas,
//minutos e segundos.

#include <stdio.h>

int main (){
    int tempo, horas, minutos, segundos;
    printf("digite o tempo de duracao do evento em segundos:\n");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;

    printf("o tempo de duracao do evento e %d horas, %d minutos e %d segundos", horas, minutos, segundos);

    return 0;
}

