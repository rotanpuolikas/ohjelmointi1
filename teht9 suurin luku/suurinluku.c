#include <stdio.h>

int newnumber;
int biggestnumber;

int main(void){

    int x;
    for(x = 0; x < 10; x++){
        scanf("%d", &newnumber);
        if(newnumber > biggestnumber){
            biggestnumber = newnumber;
        }
    }
    printf("Suurin syottamasi luku oli %d", biggestnumber);
    return(0);
}