
#include <stdio.h>

struct A {
    int a;
    int b;
    char c;
};

struct B {
    char b;
    int a;
    int c;
};
 
int main()
{
    printf("Size of date is %lu bytes\n",
           sizeof(struct A));
    printf("Size of date is %lu bytes\n",
           sizeof(struct B));
    return 0;
}