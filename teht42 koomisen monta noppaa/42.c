#include <stdio.h>
#include <stdlib.h>

int main(void){
    int heitto1, heitto2;
    int heitot;
    int taulukko[11];

    for(int i = 0; i < 36000; i++){
        heitto1 =  1 + (rand() % 6);
        heitto2 = 1 + (rand() % 6);
        heitot = heitto1 + heitto2 - 2;
        taulukko[heitot]++;
    }

    for(int i = 0; i < 11; i++){
        printf("%d %4d\n", i + 2, taulukko[i]);
    }
    return(0);
}