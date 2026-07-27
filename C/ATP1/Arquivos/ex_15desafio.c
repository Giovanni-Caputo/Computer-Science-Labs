#include <stdio.h>

int main() {
    int voto;
    int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0;
    int nulos = 0, brancos = 0;
    int total_votos = 0;

    printf("=== APURAÇÃO DE VOTOS ===\n");
    printf("Digite os votos (1 a 6). Digite 0 para encerrar.\n\n");

    while (1) {   // loop infinito até digitar 0
        printf("Voto: ");
        scanf("%d", &voto);

        if (voto == 0) {
            break;   // sai do loop
        }

        if (voto >= 1 && voto <= 4) {
            if (voto == 1) cand1++;
            else if (voto == 2) cand2++;
            else if (voto == 3) cand3++;
            else if (voto == 4) cand4++;
            total_votos++;
        }
        else if (voto == 5) {
            nulos++;
            total_votos++;
        }
        else if (voto == 6) {
            brancos++;
            total_votos++;
        }
        else {
            printf("Voto inválido! Digite apenas 1 a 6 (ou 0 para sair).\n");
        }
    }

    // Cálculo dos percentuais
    float perc_nulos = 0, perc_brancos = 0;
    if (total_votos > 0) {
        perc_nulos = (float)nulos / total_votos * 100;
        perc_brancos = (float)brancos / total_votos * 100;
    }

    // Resultados
    printf("\n=== RESULTADO DA ELEIÇÃO ===\n");
    printf("Candidato 1: %d votos\n", cand1);
    printf("Candidato 2: %d votos\n", cand2);
    printf("Candidato 3: %d votos\n", cand3);
    printf("Candidato 4: %d votos\n", cand4);
    printf("Votos nulos: %d\n", nulos);
    printf("Votos em branco: %d\n", brancos);
    printf("Total de votos válidos: %d\n", total_votos);
    printf("Percentual de votos nulos: %.2f%%\n", perc_nulos);
    printf("Percentual de votos em branco: %.2f%%\n", perc_brancos);

    return 0;
}