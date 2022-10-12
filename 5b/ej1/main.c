#include <stdio.h>
#include <stdbool.h>

int main(){
    int x,y,i;

    printf("Ingrese un valor para x: ");
    scanf("%d",&x);
    printf("Ingrese un valor para y: ");
    scanf("%d",&y);
    i = 0;
    do  {
        x = x - y;
        printf("El valor de x es:%d \n",x);
        i = i + 1;
        printf("El valor de i es: %d\n",i);
    
    }while(x >= y);

    //Primera iteracion: x = 10, i = 1
    //Segunda iteracion: x = 7, i = 2
    //Tercera iteracion: x = 4, i = 3
    //Cuarta iteracion: x = 1, i = 4


    return 0;
}