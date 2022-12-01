#include <stdio.h>

int paivienLukumaaraKuukaudessa (int kk);

int main(void){
    int kysyttykk;
    scanf("%d", &kysyttykk);
    
    int paivat = paivienLukumaaraKuukaudessa(kysyttykk);

    if(paivat == -1) printf("Kuukautta %d ei ole olemassa", kysyttykk);
    else printf("Kuukaudessa %d on %d paivaa", kysyttykk, paivat);
    return(0);
}

int paivienLukumaaraKuukaudessa (int kk){
    int kuukaudet [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(kk > 0 && kk <= 12){
        int palautus = kuukaudet[kk - 1];
        return(palautus);
    }
    else{
        return(-1);
    }
}