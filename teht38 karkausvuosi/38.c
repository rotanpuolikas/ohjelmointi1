#include <stdio.h>
#include <stdbool.h>

bool onkoKarkausvuosi(int laskettava);

int main(void){
    int vuosi;
    scanf("%d", &vuosi);

    bool laskeskele = onkoKarkausvuosi(vuosi);

    if(laskeskele) printf("Vuosi %d on karkausvuosi", vuosi);
    else printf("Vuosi %d ei ole karkausvuosi", vuosi);

    return(0);
}

bool onkoKarkausvuosi(int laskettava){
    if(laskettava % 4 == 0){
        if(laskettava % 100 == 0 && laskettava % 400 != 0){
            return(false);
        }
        else return(true);
    }
    else return(false);
}