#include <stdio.h>

int main(void){
    int taulukko1 [11];
    int taulukko2 [11];

    for(int i = 0; i < 10; i++){
        printf("%d. ", i + 1);
        scanf("%d", &taulukko1[i + 1]);
    }

    for(int i = 0; i < 10; i++) taulukko2[i + 1] = taulukko1[10 - i];

    for(int i = 0; i < 10; i++) printf("%d%4d\n", taulukko1[i + 1], taulukko2[i + 1]);
    return(0);
}