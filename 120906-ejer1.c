/*ejercicio numero 1*/
#include <stdio.h>
char convertir(char mayus[])
{
	char minus;
	minus = mayus + 32;
	return minus;
    
}

int main ()
{
    printf("=>%c\n",convertir("A"));
    
}
