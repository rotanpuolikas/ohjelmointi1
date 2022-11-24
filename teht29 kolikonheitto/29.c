#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int toss();

int result, klaava;

int main(void){
    srand(time(NULL));
    for(int x = 0; x < 99; x++){
        result = toss();
        klaava = klaava + result;
    }
    printf("Heittojen tulos: %d kruunua ja %d klaavaa", 100 - klaava, klaava);
}

int toss(){
    int result = rand() % 2;
    return(result);
}