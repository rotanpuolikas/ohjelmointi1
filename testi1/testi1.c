#include <stdio.h>

double tuntipalkka;
double tehdyttunnit;
double veroprosentti;
double verot;
double palkkaveroton;
double verottajan;
double ylittaneet;
double palkka;

int main(void){
    scanf("%lf", &tuntipalkka);
    scanf("%lf", &tehdyttunnit);
    scanf("%lf", &veroprosentti);

    if(tehdyttunnit <= 40){
        palkkaveroton = tuntipalkka * tehdyttunnit;
    }
    else{
        ylittaneet = tehdyttunnit - 40;
        palkkaveroton = tuntipalkka * 1.5 * ylittaneet + tuntipalkka * 40;
    }

    verottajan = (veroprosentti / 100) * palkkaveroton;
    palkka = palkkaveroton - verottajan;

    printf("Nettopalkkasi on %0.2lf euroa ja verottajan osuus on %0.2lf euroa", palkka, verottajan);

    return(0);
}