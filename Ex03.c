#include <stdio.h>


float numb1;
float numb2;
char Lmenu;
float operacao;

int main (){

    printf("\nMENU");
    printf("\nDIgite um número para a operação que deseja realizar : ");
    printf("\n 1 - Para Soma");
    printf("\n 2 - Para Subtraçao");
    printf("\n 3 - Para multiplicação ");
    printf("\n 4 - Para Divisão \n");
    printf("Digite aqui: ");
    scanf("%c" , &Lmenu);


    switch ( Lmenu)
    {
    case '1':
        printf("Digite o primeiro número: ");
        scanf("%f", &numb1);
        printf("Digite o segundo número: ");
        scanf("%f", &numb2);
        operacao = numb1 + numb2;
        printf("O resultado é : ");
        printf("%.2f\n", operacao);
        break;

    case '2':
        printf("Digite o primeiro número: ");
        scanf("%f", &numb1);
        printf("Digite o segundo número: ");
        scanf("%f", &numb2);
        operacao = numb1 - numb2;
        printf("O resultado é : ");
        printf("%.2f\n", operacao);
        break;

    case '3':
        printf("Digite o primeiro número: ");
        scanf("%f", &numb1);
        printf("Digite o segundo número: ");
        scanf("%f", &numb2);
        operacao = numb1 * numb2;
        printf("O resultado é : ");
        printf("%.2f\n", operacao);
        break;

    case '4':
        printf("Digite o primeiro número: ");
        scanf("%f", &numb1);
        printf("Digite o segundo número: ");
        scanf("%f", &numb2);
        operacao = numb1 / numb2;
        printf("O resultado é : ");
        printf("%.2f\n", operacao);
        break;
    
    default:

        printf("Opção inválida!");
        break;
    }

    return 0;
}