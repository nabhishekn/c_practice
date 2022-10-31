#include <stdio.h>

int main(){
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;              /*step size*/
    upper = 300;            /*upper limit*/
    step = 20;              /*steps size*/

    fahr = lower;
    printf("Fahrenhite  Celcious\n");
    while (fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;

    }    
}