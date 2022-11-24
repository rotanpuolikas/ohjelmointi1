#include <stdio.h>

int luku, potenssi, valmis;

int korotaKokonaislukuPotenssiin(int luku, int potenssi);

int main(void){
    scanf("%d", &luku);
    scanf("%d", &potenssi);

    valmis = korotaKokonaislukuPotenssiin(luku, potenssi);
    printf("Luku %d korotettuna potenssiin %d on %d", luku, potenssi, valmis);
}

int korotaKokonaislukuPotenssiin(int luku, int potenssi){
    int temp = luku;
    for(int x; x <= potenssi; x++){
        temp = temp * luku;
    }
    return(temp);
}