#include <stdio.h>

double numero = 0;
double laskettu = 0;
int kerrat = 0;
int toisto = 1;
float keskiarvo;

int main(void){
    while(toisto == 1){
        scanf("%lf", &numero);
        if(numero >= 0){
            laskettu = laskettu + numero;
            kerrat++;
        }
        else{
            toisto = 0;
        }
    }
    keskiarvo = laskettu / kerrat;
    printf("%0.2f", keskiarvo);
}