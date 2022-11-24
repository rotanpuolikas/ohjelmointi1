#include <stdio.h>

int celsius;
int fahrenheit;

int main(void){
    printf("Celsius  Fahrenheit\n");
    for(celsius = -100; celsius < 100; celsius = celsius + 10){
        fahrenheit = 1.8 * celsius + 32;
        printf("%7d %12d\n", celsius, fahrenheit);
    }
    return(0);
}

