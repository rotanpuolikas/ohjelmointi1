#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

bool kysyPIN();
int lopeta(void);
int nostaRahaa(int saldo), talletaRahaa(int saldo), saldonTarkistus(int saldo);
int setelit(int saldoMuutos, int * montako20, int * montako50);
int muuSumma(), muuTalletus();

int main(void){
    printf("Aseta kortti ja paina enter-nappia.");
    fflush(stdin);
    getchar();

    // tällä kertaa kysytään käyttäjältä pin-koodia.
    bool toiminnassa = kysyPIN();
    int saldo = 1000;

    int valikkoValinta;
    // tehdään tätä kunnes käyttäjä haluaa lopettaa
    while(toiminnassa){
        printf("\nTervetuloa! Valitse haluamasi toiminto kirjoittamalla vastaava numero ja painamalla enter-nappia.\n");
        printf("1. Nosta rahaa, 2. Talleta rahaa, 3. Tarkasta saldo, 4. Poistu.\n");
        scanf("%d", &valikkoValinta);

        // siirrytään sinne minne käyttäjä haluaa siirtyä
        switch(valikkoValinta){
            case 1:
                saldo = nostaRahaa(saldo);
                break;

            case 2:
                saldo = talletaRahaa(saldo);
                break;

            case 3: 
                saldonTarkistus(saldo);
                break;

            case 4:
                toiminnassa = false;
                lopeta();
                break;

            default:
                printf("Valitse kelpaava vaihtoehto. Paina enter-nappia palataksesi alkuun.");
                fflush(stdin);
                getchar();
                printf("\n\n\n\n\n\n");
                break;
        }
    }
}

bool kysyPIN(){
    // annetaan käyttäjälle 3 yritystä saada PIN oikein. Tässä automaatissa PIN-koodi on kätevästi kirjoitettu kysymykseen.
    int pin = 1337;

    int x = 0;
    int pinkoodi;
    while(x < 3){
        printf("Kirjoita PIN-koodi ja paina enter-nappia. (pin-koodi %d)\n", pin);
        scanf("%d", &pinkoodi);
        if(pinkoodi == pin){
            return(true);
        }
        else{
            x++;
            if(x == 3){
                printf("Aloita alusta.\n");
            }
            else printf("Kokeile uudelleen. Voit kokeilla %d kertaa uudelleen.\n", 3 - x);
        }
    }
}

int nostaRahaa(int saldo){
    int nostettavaRaha;
    int saldoMuutos;
    int montako20;
    int montako50;
    while(1){
        printf("Siirryit nostamaan rahaa. Valitse, paljonko rahaa haluat nostaa.\n");
        printf("1. 20€, 2. 40€, 3. 50€, 4. muu, 5. poistu.\n");
        scanf("%d", &nostettavaRaha);

        // käyttäjä saa valita kolmesta huikeasta valmiiksi asetetusta talletusmäärästä tai halutessaan se voi myös kirjoittaa oman summan.
        switch(nostettavaRaha){
            case 1:
                saldoMuutos = 20;
                break;

            case 2:
                saldoMuutos = 40;
                break;

           case 3: 
                saldoMuutos = 50;
                break;

            case 4:
                saldoMuutos = muuSumma();
                break;

            case 5:
                return(saldo);
                break;

            default:
                printf("Valitse kelpaava vaihtoehto. Paina enter-nappia jatkaaksesi.\n");
                fflush(stdin);
                getchar();
                printf("\n\n\n\n\n\n");
        }
        // ei anneta käyttäjän nostaa enempää rahaa kuin mitä sillä on.
        if(saldo < saldoMuutos){
            printf("Virhe: Saldolla ei ole tarpeeksi rahaa. Valitse summa, joka on alle %d euroa tai talleta rahaa.\n\n", saldo);
        }
        // jos haluttiin poistua omavalintaisen summan valinnasta, ei tehdä mitään.
        else if(saldoMuutos == 0){
        }
        else{
            setelit(saldoMuutos, &montako20, &montako50);
            saldo = saldo - saldoMuutos;
            printf("Rahaa nostettu onnistuneesti. Uusi saldosi on %d euroa.\n", saldo);
            printf("Automaatti antoi sinulle %d 50 euron ja %d 20 euron setelia.\n", montako50, montako20);
            return(saldo);
        }
    }
}

int setelit(int saldoMuutos, int * montako20, int * montako50){
    float saldoFloat = saldoMuutos;
    int temp50 = saldoMuutos;
    int amount20 = 0;
    int amount50 = 0;

    // montako 50€ seteliä annetaan
    for(int i = 0; i < saldoFloat / 50; i++){
        temp50 = temp50 - 50;
        if(temp50 >= 0){
            amount50++;
        }
    }

    // 50€ setelien määrästä täytyy vähentää 1 tietyissä tapauksissa, tässä katsotaan ne läpi.
    temp50 = saldoMuutos - amount50 * 50;

    if(amount50 != 0 && temp50 % 20 != 0){
        amount50 = amount50 - 1;
    }

    // katsotaan monestikko mennään seuraavaa for-looppia ympäri.
    int monestikko = saldoFloat - amount50 * 50;
    int temp20 = saldoMuutos - amount50 * 50;

    // 20€ setelien määrät
    for(int i = 0; i < monestikko / 20; i++){
        temp20 = temp20 - 20;
        if(temp20 >= 0){
            amount20++;
        }
    }

    // kerrotaan pointtereille mihin osoittaa
    *montako20 = amount20;
    *montako50 = amount50;

    return(0);
}

int muuSumma(){
    int saldoMuutos;
    while(1){
        printf("Paljonko rahaa haluat nostaa? Anna vastaus positiivisena kokonaislukuna. Vastaa -1 palataksesi takaisin.\n");
        printf("Nostettavan summan tulee olla joko 20 euroa, 40 euroa tai enempi, kymmenen euron vlein.\n");
        scanf("%d", &saldoMuutos);

        // katotaan, antoiko käyttjä positiivisen luvun
        if(saldoMuutos % 10 == 0 && saldoMuutos >= 20 && saldoMuutos != 30){
            return(saldoMuutos);
        }

        // katotaan haluaako käyttäjä poistua
        else if(saldoMuutos == -1){
            return(0);
        }

        // cmon, ei ne ohjeet nii vaikeat ollu
        else printf("Valitse kelpaava summa.\n");
    }
}

// normaalisti ei tietenkään ole mahdollista valita paljonko haluaa tililleen rahaa tallettaa mutta teen sen kuitenkin

int talletaRahaa(int saldo){
    int saldoMuutos;
    int talletettavaRaha;
    while(1){
        printf("Siirryit tallettamaan rahaa. Valitse, paljonko rahaa haluat tallettaa.\n");
        printf("1. 10€, 2. 20€, 3. 50€, 4. muu, 5. poistu.\n");
        scanf("%d", &talletettavaRaha);

        switch(talletettavaRaha){
            case 1:
                saldoMuutos = 10;
                break;

            case 2:
                saldoMuutos = 20;
                break;

           case 3: 
                saldoMuutos = 50;
                break;

            case 4:
                saldoMuutos = muuTalletus();
                break;

            case 5:
                return(saldo);
                break;

            default:
                printf("Valitse kelpaava vaihtoehto. Paina enter-nappia jatkaaksesi.");
                fflush(stdin);
                getchar();
                printf("\n\n\n\n\n\n");
        }
        // lisätään käyttäjän saldoon se määrä minkä hän halusi, paitsi jos hän halusi poistua omavalintaisen määrän valintanäytöstä.
        // olisipa oikeissakin automaateissa tällainen kohta.
        if(saldoMuutos != 0){
            saldo = saldo + saldoMuutos;
            printf("Rahaa talletettu onnistuneesti. Uusi saldosi on %d euroa.\n", saldo);
            return(saldo);
        }
    }
}

int muuTalletus(){
    int saldoMuutos;
    // kirjaimellisesti sama koodi kuin rahan nostamis kohdassa, hieman tietenkin muutettuna
    while(1){
        printf("Paljonko rahaa haluat tallettaa? Anna vastaus positiivisena kokonaislukuna. Vastaa -1 palataksesi takaisin.\n");
        scanf("%d", &saldoMuutos);

        // valitsemalla summan joka on suurempi kuin INT_MAX (2 147 483 647) saa saldon negatiiviseksi.
        if(saldoMuutos > 0){
            return(saldoMuutos);
        }

        else if(saldoMuutos == -1){
            return(0);
        }

        // ei saa huijjata
        else printf("Valitse kelpaava summa.\n");
    }
}

int saldonTarkistus(int saldo){
    // varmaan kaikista simppelein kohta, kerrotaan käyttäjälle kuinka paljon virtuaalisia kolikoita hänellä on.
    printf("Tilin saldo: %d euroa. Paina enter poistuaksesi. \n", saldo);
    fflush(stdin);
    getchar();

    return(0);
}

int lopeta(void){
    printf("Paina enter lopettaaksesi.\n");
    fflush(stdin);
    getchar();

    return(0);
}