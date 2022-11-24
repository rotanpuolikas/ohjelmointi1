#include <stdio.h>

int main(void){
    for(int a = 0; a < 8; a++){
        for(int b = 0; b < a; b++){
            printf("a");
        }
        printf("\n");
    }
    return(0);
}