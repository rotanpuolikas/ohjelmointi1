#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int taulukko[20];

int randomisoi();
int tarkasta(int luku);

int main(void){
    for(int i = 0; i < 20; i++){
        taulukko[i] = randomisoi();
        printf("%d", taulukko[i]);
    }
    return(0);    
}

int randomisoi(){
    bool mayhem = true;
    int luku;
    
    while(mayhem){
        luku = 1 + (rand() % 20);
        mayhem = tarkasta(luku);
    }

    return(luku);
}

int tarkasta(int luku){
    int i;
    for(i = 0; i < 20; i++){
        if(luku == taulukko[i]){
            return(true);
        }
    }
    return(false);
}