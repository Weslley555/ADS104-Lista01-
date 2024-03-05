#include <stdio.h>

int main() {
    int mat[4][4];
    int i, j;
    int somaDiagonalSecundaria = 0, somaLinhasPares = 0, somaLinhasImpares = 0;
    int contLinhasPares = 0, contLinhasImpares = 0;
    int somaDiagonalPrimaria = 0;
    float mediaLinhasPares, mediaLinhasDiagonais;

    printf("Digite os elementos da matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &mat[i][j]);
            if(i % 2 == 0) {
                somaLinhasPares += mat[i][j];
                contLinhasPares++;
            } else {
                somaLinhasImpares += mat[i][j];
                contLinhasImpares++;
            }
            if(i + j == 3) {
                somaDiagonalSecundaria += mat[i][j];
            }
            if(i == j) {
                somaDiagonalPrimaria += mat[i][j];
            }
        }
    }

    mediaLinhasPares = (float)somaLinhasPares / contLinhasPares;
    mediaLinhasDiagonais = (float)(somaDiagonalPrimaria + somaDiagonalSecundaria) / (2 * 4);

    printf("\nA soma dos elementos da diagonal secundária é: %d", somaDiagonalSecundaria);
    printf("\nA soma das linhas pares da matriz é: %d", somaLinhasPares);
    printf("\nA soma das linhas ímpares da matriz é: %d", somaLinhasImpares);
    printf("\nA média das linhas pares é: %.2f", mediaLinhasPares);
    printf("\nA média das linhas diagonais (primária e secundária) é: %.2f", mediaLinhasDiagonais);

    return 0;
}
