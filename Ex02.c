#include <stdio.h>

int main(){

    float notatrab;
    float notaavaliacao;
    float notaprova;
    float notamedia;

    printf("Bem vindo a soma de suas notas, Digite os valores em cada avalição: \n ");

    do {
        printf("Digite sua nota no Trabalho do Laboratório (Nota maxima 10) : ");
        scanf("%f", &notatrab);
    } while (notatrab > 10);

    do {
        printf("Digite sua nota na Avaliação Semestral (Nota maxima 10) : ");
        scanf("%f", &notaavaliacao);
    } while (notaavaliacao > 10);

    do {
        printf("Digite sua nota no Exame Final: (Nota maxima 10) : ");
        scanf("%f", &notaprova);
    } while (notaprova > 10);

    notamedia = ((notatrab * 2 + notaavaliacao * 3 + notaprova * 5) / 10 );

    if(notamedia < 5){
        printf("Sua media foi : ");
        printf("%f \n", notamedia);
        printf("RESULTADO: E ");
    }
    
    else if(notamedia >= 5 && notamedia < 6 ){
        printf("Sua media foi : ");
        printf("%f \n", notamedia);
        printf("RESULTADO: D ");
    }

    else if(notamedia >= 6 && notamedia < 7 ){
        printf("Sua media foi : ");
        printf("%f \n", notamedia);
        printf("RESULTADO: C ");
    }

    else if(notamedia >= 7 && notamedia < 8){
         printf("Sua media foi : ");
        printf("%f \n", notamedia);
        printf("RESULTADO: B");
        
    }

    else if(notamedia > 8){
         printf("Sua media foi : ");
        printf("%.2f\n", notamedia);
        printf("RESULTADO: A ");
    }

    return 0;
}