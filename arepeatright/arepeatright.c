#include <stdio.h>

int main(void){
    for(int a = 1; a < 9; a++){
        for(int b = 0; b < 8 - a; b++){
            printf(" ");
        }
        for(int b = 0; b < a; b++){
            printf("a");
        }
        printf("\n");
    }
    return(0);
}