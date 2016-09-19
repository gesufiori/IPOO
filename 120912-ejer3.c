	#include <stdio.h>
#include <stdlib.h>

double noticacion_numero(){
    char noti[50]="98773-e";
    printf("%3.5f",((double)atol(noti))/pow(10,6));

}

main(){
     noticacion_numero();
}
