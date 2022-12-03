#include <stdio.h>
#include <stdbool.h>

int main(void){
    int lista [10];
    int temp;
    bool eikelpaa;

    for(int i = 0; i < 10; i++){
        printf("%d. ", i + 1);
        scanf("%d", &temp);

        if(temp >= 0 && temp <= 100){
            lista[i] = temp;
        }
        else{
            eikelpaa = true;
            while(eikelpaa){
                printf("Ei kelpaa, anna %d. kokonaisluku uudestaan > ", i + 1);
                scanf("%d", &temp);
                if(temp >= 0 && temp <= 100){
                    eikelpaa = false;
                    lista[i] = temp;
                }
            }
        }
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", lista[i]);
    }
    int suurin = 0;
    int paikka;
    float keskiarvo = 0;

    for(int i = 0; i < 10; i++){
        if(suurin < lista[i]){
            suurin = lista[i];
            paikka = i;
        }
        keskiarvo = keskiarvo + lista[i];
    }

    if(keskiarvo != 0) keskiarvo = keskiarvo / 10;

    printf("\n%d %d", suurin, paikka);
    printf("\n%0.3f", keskiarvo);

    return(0);
}