#include <stdio.h>

int main() {
    int numeros[6];
    int *ponteiro = numeros;
    
    for(int i = 0; i < 6; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 6; i++) {
        printf("O valor do %dº número é: %d\n", i+1, *(ponteiro+i));
        printf("O endereço de memória do %dº número é: %p\n", i+1, (ponteiro+i));
    }

    return 0;
}
