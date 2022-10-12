#include <stdio.h>
#include <stdbool.h>

bool pedirBooleano(){
    int n;
    printf("Dame un booleano: ");
    scanf("%d",&n);

    bool x; // declaro como booleano pero va a ser true si es un numero dist de 0 y false si es cero. Eso lo va a determinar el entero que declare

    x = n;

    return x;// de aca se va ir como true o false
}

void imprimeBooleano(bool x){
    if(x){
        printf("verdadero");
    }else {
        printf("Falso");
    }
}

int main(){

imprimeBooleano(pedirBooleano());

    return 0;
}