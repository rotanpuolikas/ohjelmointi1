#include <stdio.h>

int numero = 0;
int reversedNumero = 0;
int temp = 0;

int main(void){
    scanf("%d", &numero);
    if(numero > 9999 && numero < 100000){
        temp = numero;
        while(temp != 0){
            reversedNumero = (reversedNumero * 10) + (temp % 10);
            temp = temp / 10;
        }
        if(numero == reversedNumero){
            printf("Luku %d on palindromi", numero);
        }
        else{
            printf("Luku %d ei ole palindromi", numero);
        }
    }
    else{
        printf("Syote ei ole viisinumeroinen positiivinen kokonaisluku");
    }
}