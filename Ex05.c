#include <stdio.h>

int main() {
    int numeros[12];
    int vetpar[12];
    int vetimpar[12];
    int i;
    int contpar = 0;
    int contimpar = 0;

    printf("Digite doze numeros inteiros:");
    for(i = 0; i < 12; i++) {
        scanf("%d", &numeros[i]);
        if(numeros[i] % 2 == 0) {
            vetpar[contpar] = numeros[i];
            contpar++;
        } else {
            vetimpar[contimpar] = numeros[i];
            contimpar++;
        }
    }

    printf("\nNumeros pares:\n");
    for(i = 0; i < contpar; i++) {
        printf("%d ", vetpar[i]);
    }

    printf("\nNúmeros impares:\n");
    for(i = 0; i < contimpar; i++) {
        printf("%d ", vetimpar[i]);
    }

    return 0;
}
