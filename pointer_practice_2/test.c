#include <stdio.h>

int main()

{
    int a = 1;
    int b = 3;
    int c = 4;
    
    int *p;
    int *q;

    int d = 7;
    int e;
    int *ptr;

    p = &a;             //set p to refer a
    printf("%d\n", p);
    q = &b;             //set q to refer b
    c = *p;             //retrieve p's pointee value and put it in c
    printf("%d\n", c);
    p = q;              // assign q to p
    printf("%d\n", *p);
    *p = 13;            //change value of p
    printf("%d\n", *p);

/*Copying value of d into variable e using pointer */
    ptr = &d;           //set ptr to refer d
    e = *ptr;           //retrive ptr's pointee value and put it in e
    printf("%d\n", e);
    
}