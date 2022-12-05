/*This is one method to set, reset and toggle bits*/


#include <stdio.h>


struct bits{
    unsigned int a:1;
    unsigned int b:1;
    unsigned int c:1;
};

int main(){

    struct bits mybits;

    mybits.b = 1;
    mybits.c = 0;

    mybits.a = mybits.a;
    mybits.b = !mybits.b;
    mybits.c ^= 1;

    if (mybits.c == 1)
    printf("abhishek");

}