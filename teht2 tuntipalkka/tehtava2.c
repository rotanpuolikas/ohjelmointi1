#include <stdio.h>

int tuntimaara;
int tuntipalkka;
int yhteen;

int main(void)
{
    printf("Anna tuntipalkka >");
    scanf("%d", &tuntipalkka);

    printf("Tehdyt tunnit >");
    scanf("%d", &tuntimaara);

    yhteen = tuntipalkka * tuntimaara;

    printf("Bruttopalkkasi on %d euroa", yhteen);
    return(0);
} 