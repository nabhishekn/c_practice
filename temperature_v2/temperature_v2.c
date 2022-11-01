#include<stdio.h>

/*print Fahrenhite-Celsius table for fahr = 0,20,....
300; floating-point version */

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;          /*lower lomit of temperature scale*/
    upper = 300;        /*upper lomit of temperature scale*/
    step = 20;          /*step size*/

    fahr = lower;

    printf("C   F\n");
    while(celsius <= upper){
        fahr = (9.0*celsius) / 5.0 + 32.0;
        printf("%3.0f %6.01f\n", celsius, fahr);
        celsius = celsius + step;
    }
}