#include <stdio.h>

double numero = 0;
double laskettu = 0;
int kerrat = 0;
int toisto = 1;
float keskiarvo;

int main(void){
    for(kerrat; numero >= 0; kerrat++){
        scanf("%lf", &numero);
        if(numero >= 0){
            laskettu = laskettu + numero;
        }
    }
    keskiarvo = laskettu / (kerrat - 1);
    printf("%0.2f", keskiarvo);
}