#include <stdio.h>

float laskeParkkiMaksu(int tunnit);
float asiakas1, asiakas2, asiakas3, yhtvel, veloitus, tempveloitus;
float a1tunnit, a2tunnit, a3tunnit, yhttun, temptunnit;


int main(void){
    scanf("%f", &a1tunnit);
    asiakas1 = laskeParkkiMaksu(a1tunnit);
    scanf("%f", &a2tunnit);
    asiakas2 = laskeParkkiMaksu(a2tunnit);
    scanf("%f", &a3tunnit);
    asiakas3 = laskeParkkiMaksu(a3tunnit);
    yhttun = a1tunnit + a2tunnit + a3tunnit;
    yhtvel = asiakas1 + asiakas2 + asiakas3;
    /*
    printf("%8s%13s%12s\n", "Asiakas", "Tunnit", "Veloitus");
    printf("%8s%13.2d%12.2f\n", "1", a1tunnit, asiakas1);
    printf("%8s%13.2d%12.2f\n", "2", a2tunnit, asiakas2);
    printf("%8s%13.2d%12.2f\n", "3", a3tunnit, asiakas3);
    printf("%8s%13.2d%12.2f", "YHTEENSA", yhttun, yhtvel);
    */
    printf("Asiakas Tunnit Veloitus\n");
    printf("1 %.2f %.2f\n", a1tunnit, asiakas1);
    printf("2 %.2f %.2f\n", a2tunnit, asiakas2);
    printf("3 %.2f %.2f\n", a3tunnit, asiakas3);
    printf("YHTEENSA %.2f %.2f", yhttun, yhtvel);
}

float laskeParkkiMaksu(int tunnit){
    veloitus = 2;
    tempveloitus = veloitus;
    if(tunnit <= 24){
        temptunnit = tunnit;
        while(veloitus < 10 && temptunnit > 3){
            veloitus = veloitus + 0.5;
            temptunnit = temptunnit - 1;
        }
    }
    else{
        temptunnit = tunnit;
        while(temptunnit >= 24){
            veloitus = veloitus + 10;
            temptunnit = temptunnit - 24;
        }
        while(tempveloitus < 10 && temptunnit < 3){
        tempveloitus = tempveloitus + 0.5;
        veloitus = veloitus + 0.5;
        temptunnit = temptunnit - 1;
        }
    }
    return(veloitus);
}