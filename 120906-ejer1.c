/*ejercicio numero 1*/
/*ejercicio numero 1*/
#include <stdio.h>
void convertir(char *p)
{
	*p+=32;
}

int main ()
{
	char a='A';
	convertir(&a);
    printf("%c",a);
    
}
