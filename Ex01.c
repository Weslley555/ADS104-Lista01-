/*
Feira até 5kg :
Morango : 7,5 kg
Maça : 3,5 kg

+ de 5kg:
Morango : 5,3 kg
Maça : 2,8 kg

OBS: Compras abaixo de 5Kg com valores acima de 19,00 tem 8% de desconto no total ;
*/
#include <stdio.h>

int main(){

    float MorangoKg;
    float MacaKg;
    float KgMorango;
    float KgMaca;
    float TotalKg;
    float TotalPKg;
    float DescTotalKg;
    float Morest = 99 ;
    float Macaest = 99 ;

    do{
    printf("Quantidade de morango em estoque : ");
    printf("%.2f\n", Morest);
    printf("Digite quantos Kg de Morango deseja comprar : ");
    scanf("%f", &KgMorango);
    } while ( KgMorango > Morest);

    do{
    printf("Quantidade de maça em estoque : ");
    printf("%.2f\n", Macaest);
    printf("Digite quantos Kg de Maça deseja comprar : ");
    scanf("%f", &KgMaca);
    } while( KgMaca > Macaest);

    TotalKg = KgMaca + KgMorango;

    if(KgMaca < 5.01){
        MacaKg = KgMaca;
        MacaKg = MacaKg * 3.5 ;
    }
    else{
        MacaKg = KgMaca;
        MacaKg = MacaKg * 2.8 ;
    }

     if(KgMorango < 5.01){
        MorangoKg = KgMorango;
        MorangoKg = MorangoKg * 7.5 ;
    }
    else{
        MorangoKg = KgMorango;
        MorangoKg = MorangoKg * 5.3 ;
    }

    TotalPKg = MacaKg + MorangoKg ;

    if(TotalKg < 5.01 && TotalPKg > 19.00){
        DescTotalKg = TotalPKg * 0.92 ;
    }
    else{
        DescTotalKg = TotalPKg;
    }
    
    
    printf("Voçê ira pagar em Morangos: ");
    printf("%.2f\n", MorangoKg);
    printf("Voçê ira pagar em Maçãs: ");
    printf("%.2f\n", MacaKg);
    printf("E o total a pagar será: ");
    printf("%.2f", DescTotalKg) ;

    return 0;
}
