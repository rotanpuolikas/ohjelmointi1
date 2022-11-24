#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int kysy();

int luku1, luku2, vastaus, oikeaVastaus, vaihtelu, temp;
bool jatka = true;

int main(void){
    srand(time(NULL));

    oikeaVastaus = kysy();

    while(jatka == true){
        scanf("%d", &vastaus);
        if(vastaus == oikeaVastaus){
            printf("Oikein!\n");
            oikeaVastaus = kysy();
        }
        else if(vastaus == -1){
            jatka = false;
        }
        else{
            printf("\nVäärin, yritä uudelleen > ");
        }
    }
}


int kysy(){
    vaihtelu = rand() % 2;
    luku1 = rand() % 9 + 1;
    luku2 = rand() % 9 + 1;
    
    if(vaihtelu == 0){
        printf("Anna luku -1 lopettaaksesi\nPaljonko on %d kertaa %d? ", luku1, luku2);
        oikeaVastaus = luku1 * luku2;
    }
    else{
        temp = luku1 * luku2;
        printf("Anna luku -1 lopettaaksesi\nPaljonko on %d jaettuna %d? ", temp, luku2);
        oikeaVastaus = luku1;
    }
    return(oikeaVastaus);
}




