#include <stdio.h>

int pedirEnteros(){
    int x,y,m;
    printf("Ingrese un valor para X: ");
    scanf("%d", &x);

    printf("Ingrese un valor para Y: ");
    scanf("%d", &y);

    if( x < y){
        m = x;
        printf("X es menor que y, entonces M = %d\n", m);

    }else if( x >= y){
        m = y;
        printf("X es mayor o igual que y, entonces M = %d \n", m);
    }

    return m;
}

int main(){

    int num,z;

    num = pedirEnteros();

    printf("Ingrese un numero para Z: ");
    scanf("%d",&z);

    if( num < z ){
        // no se como usar skip
    } else if ( num >= z){
        num = z;
        printf("M es mayor que z, entonces M = %d \n", num);
    }

    return 0;
}
