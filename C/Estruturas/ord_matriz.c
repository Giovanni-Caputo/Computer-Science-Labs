#include <stdio.h>

#define MAX 100

void ordenarColuna(int matriz[][MAX], int m, int coluna) {
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (matriz[i][coluna] > matriz[j][coluna]) {
                int temp = matriz[i][coluna];
                matriz[i][coluna] = matriz[j][coluna];
                matriz[j][coluna] = temp;
            }
        }
    }
}

int main() {
    int m, n;
    int matriz[MAX][MAX];

    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int col = 0; col < n; col++) {
        ordenarColuna(matriz, m, col);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
