#include <stdio.h>

float f;
int c = -100;

int main(void){
    printf("%7s%12s\n", "Celsius", "Fahrenheit");
    while(c < 101){
        f = 1.8 * c + 32;
        printf("%6d%11.2f\n", c, f);
        c = c + 10;
    }
}