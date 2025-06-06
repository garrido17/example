// Autor: Carlos Mendoza
#include <stdio.h>


int suma (int n){
if (n==1){
    return 1;
}
    return n + suma(n-1);
}
int main(){
    printf("Hola mundo\n");
    printf("Antar estuvo aquí\n");
}