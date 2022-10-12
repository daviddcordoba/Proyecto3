#include <stdio.h>
#include <stdbool.h>

int pedirEntero(){
    int num;
    printf("Dame un numero entero: ");
    scanf("%d",&num);

    return num;
}

void imprimeEntero(int x){ printf("El numero es %d",x) ;}

int main(){

    imprimeEntero(pedirEntero());


    return 0;
}