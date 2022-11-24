#include <stdio.h>
#include <math.h>

double laskeHypotenuusa(double sivu1, double sivu2);

int main() {
    double sivu1 = 0.0;
    double sivu2 = 0.0;
    double hypotenuusa = 0.0;
    
    printf("\nAnna ensimmäinen sivu: ");
    scanf("%lf", &sivu1);
    
    printf("\nAnna toinen sivu: ");
    scanf("%lf", &sivu2);
    
    hypotenuusa = laskeHypotenuusa(sivu1, sivu2);

    printf("%lf", hypotenuusa);

    return 0;
}

double laskeHypotenuusa(double sivu1, double sivu2){
    double temp = pow(sivu1, 2) + pow(sivu2, 2);
    double hypotenuusa = sqrt(temp);

    return(hypotenuusa);
}

