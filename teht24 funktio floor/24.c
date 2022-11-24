#include <stdio.h>
#include <math.h>

double num;

double floorfunc(double num);

int main(void){
    for(int x = 0; x < 5; x++){
        scanf("%lf", &num);
        floorfunc(num);
    }
}

double floorfunc(double num){
    double y = floor(num + 0.5);
    printf("%lf ", num);
    printf("%lf\n\n\n\n", y);
}