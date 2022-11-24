#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int kysy();

int luku1, luku2, vastaus, oikeaVastaus;
bool jatka = true;

int main(void){
    srand(time(NULL));

    oikeaVastaus = kysy();

    while(jatka == true){
        scanf("%d", &vastaus);
        if(vastaus == oikeaVastaus){
            printf("Oikein!");
            oikeaVastaus = kysy();
        }
        else if(vastaus == -1){
            jatka = false;
        }
        else{
            printf("Väärin, yritä uudelleen > ");
        }
    }
}


int kysy(){
    luku1 = rand() % 9 + 1;
    luku2 = rand() % 9 + 1;
    oikeaVastaus = luku1 * luku2;

    printf("Anna luku -1 lopettaaksesi\nPaljonko on %d kertaa %d? ", luku1, luku2);
    return(oikeaVastaus);
}




