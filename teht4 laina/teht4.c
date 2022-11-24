#include <stdio.h>

double lainasumma;
double lainakorko;
double lainapaivat;
double kokonaiskorko;
double lainakorkomuunnos;

int main(void){

    scanf("%lf", &lainasumma);
    scanf("%lf", &lainakorko);
    scanf("%lf", &lainapaivat);

    lainakorkomuunnos = lainakorko / 100;
    kokonaiskorko = ((lainasumma * lainakorkomuunnos) * lainapaivat) / 365;
    
    printf("Lainapaaoman %0.2lf euroa korko %0.0lf paivalta korkoprosentilla %0.2lf on yhteensa %0.2lf euroa.", lainasumma, lainapaivat, lainakorko, kokonaiskorko);

    return(0);
}