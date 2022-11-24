#include <stdio.h>
#include <math.h>

int luku, palautus, jako, temp = 0;

int onkoLukuTaydellinen(int luku);

int main(void){
    for(luku = 1; luku <= 10000; luku++){
        palautus = onkoLukuTaydellinen(luku);
        if(palautus == 1){
            printf("\nLuku %d on taydellinen luku", luku);
        }
    }
    return(0);
}

int onkoLukuTaydellinen(int luku){
    jako = 0;
    temp = 0;
    for(int x = 1; x < luku; x++){
        jako = luku % x;
        if(jako == 0){
            temp = temp + x;
        }
    }
    if(luku == temp){
        return(1);
    }
    else{
        return(0);
    }
}