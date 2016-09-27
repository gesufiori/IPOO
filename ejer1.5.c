#include<stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower=300;
    upper=0;
    step=20;

    fahr=lower;
    while (fahr>=upper){
        celsius=5*(fahr-32)/9;
        printf("%f\t%f\n", fahr, celsius);
        fahr = fahr - step;
    }
}
