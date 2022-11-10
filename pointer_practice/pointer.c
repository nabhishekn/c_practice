#include <stdio.h>

int main()

{
    int a = 15, b = 5;
    int *p, *q;
    p = &a;
    q = &b;

    printf("%d\n", *q); 
    printf("%d\n", *p);
    printf("%x\n", &a);
    printf("%x\n", &b);
    printf("%x\n", &p);
    

}