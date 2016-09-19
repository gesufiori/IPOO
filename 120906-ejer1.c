/*ejercicio numero 1*/
#include <stdio.h>
void convertir()
{
    char mayus,*ptmin;
    printf("Ingrese una letra en mayuscula: ");
    scanf("%c",mayus);
    mayus+=32;
    ptmin = &mayus;
    printf("Convertido en minuscula: %c", *ptmin+32);
}

int main ()
{
    convertir();
    return 0;
}
