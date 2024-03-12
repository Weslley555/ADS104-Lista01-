#include <stdio.h>

void encontrarMaiorMenor(int *numeros, int tamanho, int *maior, int *menor){
    *maior = *menor = numeros[0];
    
    for(int i = 1; i < tamanho; i++){
        if(numeros[i] > *maior){
            *maior = numeros[i];
        }
        else if(numeros[i] < *menor){
            *menor = numeros[i];
        }
    }
}

int main() {
    const int tamanho = 4;
    int numeros[tamanho];
    int *ponteiro = numeros;
    int maior, menor;

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < tamanho; i++) {
        printf("O valor do %dº número é: %d\n", i+1, *(ponteiro+i));
        printf("O endereço de memória do %dº número é: %p\n", i+1, (ponteiro+i));
    }

    encontrarMaiorMenor(ponteiro, tamanho, &maior, &menor);

    printf("O maior número é: %d e seu endereço de memória é: %p\n", maior, &maior);
    printf("O menor número é: %d e seu endereço de memória é: %p\n", menor, &menor);

    return 0;
}
