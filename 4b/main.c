#include <stdio.h>
#include <stdbool.h>


int main(){

    int x,y,z,m;

    printf("Ingrese un valor para X: ");
    scanf("%d", &x);

    printf("Ingrese un valor para Y: ");
    scanf("%d", &y);

    printf("Ingrese un valor para Z: ");
    scanf("%d", &z);

    printf("Ingrese un valor para M: ");
    scanf("%d", &m);

    if( x < y){
        m = x;
        printf("X es menor que y, entonces M = %d", m);

    }else if( x >= y){
        m = y;
        printf("X es mayor o igual que y, entonces M = %d \n", m);
    }

    if( m < z ){
        // no se como usar skip
    } else if ( m >= z){
        m = z;
        printf("M es mayor que z, entonces M = %d \n", m);
    }

    return 0;
}