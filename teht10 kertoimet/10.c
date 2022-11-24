#include <stdio.h>

int n = 1;

int main(void){
    printf("\n%-7s%-7s%-7s%-7s", "N", "10*N", "100*N", "1000*N");
    while(n < 11){
        printf("\n%-7d%-7d%-7d%-7d", n, n*10, n*100, n*1000);
        n++;
    }
}