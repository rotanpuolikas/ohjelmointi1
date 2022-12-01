#include <stdio.h>

int main(void){
    int lista [20];
    int kysy;
    int i = 0;
    printf("%d. ", i + 1);
    while(i < 20){
        scanf("%d", &kysy);
        if(kysy >= 10 && kysy <= 100){
            lista [i] = kysy;
            i++;
            if(i < 20) printf("%d. ", i + 1);
        }
    }

    int x, y;
    for(x = 0; x < 20; x++){
        for(y = 0; y < 20; y++){
            if(lista[x] == lista[y] && x != y) break;
        }
        if(y == 20){
            printf("%d\n", lista[x]);
        }
    }
    return(0);
}