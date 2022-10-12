#include <stdio.h>
#include <stdbool.h>

int main(){
    int i;

    printf("Ingrese un valor para i: ");
    scanf("%d",&i);
    do  {
        i =0 ;
    printf("%d\n",i);
    }while(i != 0);

    printf("El valor final de i es: %d",i);


    return 0;
}