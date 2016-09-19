/*ejercicio numero 2*/
#include<stdio.h>

int  strindex ()
{
    char s[50],t;
    int index=-1;

    printf("\nIngrese un string : \n");
    // scanf("%s",&s)
    gets(s);
    
    prinf("\nIngrese el caracter a buscar : \n");
    //scanf("%c",&t);
    gets(t);

    for (int i=0 , s[i] != '\0'; i++)
    {
        if (s[i]==t)
        {
            index = i;
        }
        printf("Caracter : %d\n")
    }
    return index;
}
