
#include <stdio.h>
#include <stdbool.h>

int main(){

int x,y,z,resultado1,resultado2,resultado4;
bool resultado5,resultado3;

printf("Ingrese un valor para x: ");
scanf("%d",&x);

printf("Ingrese un valor para y: ");
scanf("%d",&y);

printf("Ingrese un valor para z: ");
scanf("%d",&z);

resultado1 = x + y + 1 ;
printf("El resultado es: %d\n", resultado1);

resultado2 = z * z + y * 45 - 15 * x ;
printf("El resultado es: %d\n", resultado2);

resultado3 = y - 2 == (x * 3 + 1) % 5 ;
printf("El resultado es: %d\n", resultado3);

resultado4 = y / 2 * x ;
printf("El resultado es: %d\n", resultado4);

resultado5 = y < x * z;
printf("El resultado es: %d\n", resultado5);


print("x%%4 == 0 = 5S \n", (x%4==0) ? "True":"False");
printf("x+y == 0 && y-x == (-1) * z =%s \n", (x+y == 0 && y-x == (-1)*z) ? "True" : "False");
printf("not b && w = %s \n", (!resultado3 && resultado5) ? "True" : "False");

return 0;

}

