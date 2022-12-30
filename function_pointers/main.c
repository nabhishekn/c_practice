#include <stdio.h>

int *larger(int *, int *);


int main(){

    int a = 78;
    int b = 9;

    int *greater;
    //passing address of variable to function
    greater = larger(&a, &b);
    printf("larger number is:%d", *greater);

    return 0;
    }

int *larger(int *a, int *b){
    if (*a>*b){
        return a;
    }
    return b;
}