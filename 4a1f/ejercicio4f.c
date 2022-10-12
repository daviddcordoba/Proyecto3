#include <stdio.h>
#include <stdbool.h>

int main(){

    int x,y;

    printf("Ingrese un valor para x: ");
    scanf("%d",&x);

    printf("Ingrese un valor para y: ");
    scanf("%d",&y);

    if(x>=y){
        x=0;
        printf("x es mayor o igual, ahora x vale 0");
    }else if( x<=y){
        x=2;
        printf("X es menor o igual, ahora x es 2");
    }


    return 0;
}