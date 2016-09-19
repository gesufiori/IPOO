/*ejercicio numero 4*/
#include <stdio.h>
#include <string.h>

void inversa(char str[], int size){
    if (size!=EOF){
        printf("%c",str[size]);
        inversa(str,size-1);
    }
}
int main(){
    char inv_str[]="inversa";
    inversa(inv_str,strlen(inv_str));
    return 0;
}
