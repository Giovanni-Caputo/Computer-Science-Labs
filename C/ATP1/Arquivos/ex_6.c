#include <stdio.h>

int main() {
    int num;
    unsigned long long fatorial = 1;   // usa unsigned long long para números maiores

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Não existe fatorial de número negativo!\n");
    } else {
        for(int i = 1; i <= num; i++) {
            fatorial *= i;
        }
        printf("%d! = %llu\n", num, fatorial);
    }

    return 0;
}