#include <stdio.h>

int main(){

    int Tc;
    int Tf = 50;

    printf("Fahrenheit | Celsius \n");

    do
    {
        Tc = ((Tf-32)*5) /9 ;
        printf("%d | %d\n", Tf, Tc); 
        Tf ++ ;

    } while (Tc < 18);

    return 0;
}