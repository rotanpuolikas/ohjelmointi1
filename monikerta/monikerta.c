#include <stdio.h>

int luku1;
int luku2;

int check;

int main(void){

    scanf("%d", &luku1);
    scanf("%d", &luku2);

    check = luku1 % luku2;

    if(check == 0){
        printf("Luku %d on luvun %d monikerta.", luku1, luku2);
    }
    else{
        printf("Luku %d ei ole luvun %d monikerta.", luku1, luku2);
    }
    return(0);
}