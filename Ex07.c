#include <stdio.h>

void dobro(int numero1, int numero2, int* dobro1, int* dobro2){
    *dobro1 = numero1 * 2;
    *dobro2 = numero2 * 2 ;
}

void triplo (int dobro1 , int dobro2, int* triplo1, int* soma){
    *soma = dobro1 + dobro2 ;
    *triplo1 = (dobro1 + dobro2) * 3;
}

int  main(){

    int numero1, numero2;
    int dobro1, dobro2;
    int triplo1, soma;

    printf("Digite o primeiro numero : " );
    scanf("%d", &numero1);

    printf("Digite o segundo numero : " );
    scanf("%d", &numero2);

    dobro(numero1, numero2, &dobro1, &dobro2);
    triplo(dobro1,dobro2, &triplo1, &soma);

    printf("Numeros digitados : ");
    printf("%d e %d \n", numero1, numero2);
    printf("O dobro dos numeros digitados : ");
    printf("%d e %d\n", dobro1 , dobro2);
    printf("Soma dos dois numeros : ");
    printf("%d\n",soma);
    printf("E o triplo da soma dos dois numeros : ");
    printf("%d\n",triplo1);

    return 0;
}