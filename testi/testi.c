 #include <stdio.h>

 int saldoMuutos = 130;
 int montako20 = 0;
 int montako50 = 0;
 
 int main(void){
    float saldoFloat = saldoMuutos;
    int temp50 = saldoMuutos;
    int amount20 = 0;
    int amount50 = 0;

    for(int i = 0; i < saldoFloat / 50; i++){
        temp50 = temp50 - 50;
        if(temp50 >= 0){
            amount50++;
        }
    }

    
    // katsotaan monestikko mennään seuraavaa for-looppia ympäri.
    int monestikko = saldoFloat - amount50 * 50;
    int temp20 = saldoMuutos - amount50 * 50;
    
    for(int i = 0; i < monestikko / 20; i++){
        temp20 = temp20 - 20;
        if(temp20 >= 0){
            amount20++;
        }
    }

    montako20 = amount20;
    montako50 = amount50;

    printf("temp20 %d\ntemp50 %d\nmontako20 %d\nmontako50 %d\nmonestikko %d\nsaldoFloat %f", temp20, temp50, montako20, montako50, monestikko, saldoFloat/50);
 }