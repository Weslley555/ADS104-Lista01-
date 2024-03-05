#include <stdio.h>
#include <stdbool.h>

bool Npar(int Numero1){
    return Numero1 % 2 == 0;
}

int main(){

    int Numero1;
    char Loop;

    printf("Digite um numero : ");
    scanf("%d", &Numero1);

    if(Npar(Numero1)){
        printf("Numero Par\n");
    } else{
        printf("Numero Impar\n");
    }

    return 0;
    
}