
/*This program is all about application of ternary operator*/

#include <stdio.h>

int main (){

    int v;

    printf("Enter number to check if it is even or odd: ");
    scanf("%d", &v);

    if (v < 1)
        return 1;

    else
    printf("%d is a %s number", v, (v % 2) ? "odd" : "even");

    return 0;
}