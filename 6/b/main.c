#include <stdio.h>

int pedirEntero(){
    int x;
    scanf("%d", &x);
    return x;
}

int main(){

    
    int x,y,z,m;
    printf("Ingrese un valor para x: ");
    x = pedirEntero();

    printf("Ingrese un valor para y: ");
    y = pedirEntero();

    printf("Ingrese un valor para z: ");
    z = pedirEntero();

    printf("Ingrese un valor para m: ");
    m = pedirEntero();

    if( x < y){
        m = x;
    }else if( x >= y){
        m = y;
    }

    if( m < z ){
        // no se como usar skip
    } else if ( m >= z){
        m = z;
        printf("M es mayor que z, entonces M = %d \n", m);
    }

    return 0;
}
