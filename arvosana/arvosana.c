#include <stdio.h>

int arvosana;

int main(void){
    scanf("%d", &arvosana);
    if(arvosana < 0){
        printf("Virheellinen pistemaara");
    }
    else if(arvosana <= 11){
        printf("Hylatty");
    }
    else if(arvosana <= 13){
        printf("1");
    }
    else if(arvosana <= 16){
        printf("2");
    }
    else if(arvosana <= 19){
        printf("3");
    }
    else if(arvosana <= 22){
        printf("4");
    }
    else if(arvosana <= 24){
        printf("5");
    }
    else{
        printf("Virheellinen pistemaara");
    }
    return(0);
}