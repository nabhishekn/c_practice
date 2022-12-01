#include <stdio.h>
#include <stddef.h>


struct test{
    int apple;
    int mango;
    char abhi;
    char animal[50];
    float human;
};

int main()
{
    printf("off set of 1st member is : %lu\n", offsetof(struct test, apple));
    printf("off set of 2st member is : %lu\n", offsetof(struct test, mango));
    printf("off set of 3rd member is : %lu\n", offsetof(struct test, abhi));
    printf("off set of 4th member is : %d\n", offsetof(struct test, animal));
    printf("off set of 5th member is : %lu\n", offsetof(struct test, human));
}