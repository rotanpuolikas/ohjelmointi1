#include <stdio.h>
#include <math.h>

/*
int aika(int sec1, int min1, int hour1, int sec2, int min2, int hour2, int * returnSec, int * returnMin, int * returnHour, int * returnAllSec);

int sec1, min1, hour1, sec2, min2, hour2;
double returnSec, returnMin, returnHour, returnAllSec;
*/

int aika(int sec, int min, int hour);

int sec1, min1, hour1, sec2, min2, hour2, aika1, aika2, diffSec, diffMin, diffHour;

int main(void){
    scanf("%d", &hour1);
    scanf("%d", &min1);
    scanf("%d", &sec1);

    scanf("%d", &hour2);
    scanf("%d", &min2);
    scanf("%d", &sec2);

    aika1 = aika(sec1, min1, hour1);
    aika2 = aika(sec2, min2, hour2);

    diffSec = fabs(aika1 - aika2);

    printf("%d\n", diffSec);

    diffHour = diffSec / 3600;
    diffSec = diffSec % 3600;

    diffMin = diffSec / 60;
    diffSec = diffSec % 60;

    printf("%d %d %d ", diffHour, diffMin, diffSec);


    /*
    aika(sec1, min1, hour1, sec2, min2, hour2, &returnSec, &returnMin, &returnHour, &returnAllSec);

    printf("Aikaero on: %d sekuntia\n", returnAllSec);
    printf("Aikaero on %d tuntia %d minuuttia %d sekuntia", returnHour, returnMin, returnSec);
    */


}

/*
int aika(int sec1, int min1, int hour1, int sec2, int min2, int hour2, int * returnSec, int * returnMin, int * returnHour, int * returnAllSec){
    int temp;
    temp = min1 * 60;
    sec1 = sec1 + temp;
    
    temp = hour1 * 60 * 60;
    sec1 = sec1 + temp;

    temp = min2 * 60;
    sec2 = sec2 + temp;

    temp = hour2 * 60 * 60;
    sec2 = sec2 + temp;

    returnAllSec = fabs(sec1 - sec2);

    returnHour = returnAllSec % 360;
    temp = returnHour * 60 * 60;
    returnMin = temp % 60;
    temp = returnMin * 60;
    returnSec = temp % 60;
}

*/

int aika(int sec, int min, int hour){
    int temp;
    temp = min * 60;
    sec = sec + temp;
    temp = hour * 60 * 60;
    sec = sec + temp;

    return(sec);
}