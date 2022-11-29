#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mystruct{
    int length;
    int breadth;
    int width;
};

typedef struct{
    int *apple;
    int pine;
}myptr;

int main()
{
    struct mystruct dime;
    myptr fruits;
    myptr *ptrfruits = &fruits;

    fruits.apple = malloc(sizeof(int));

    if((fruits.apple) == NULL)
    {
        printf("failed to allocate memory\n");

        return 0;
    }

    *fruits.apple = 30;
    printf("%d\n", *fruits.apple);
        
    dime.length = 12;
    dime.width = 25;
    dime.breadth = 14;

    printf("%d\n", dime.length);
    printf("%d\n", dime.width);
    printf("%d\n", dime.breadth);
    int Area = dime.breadth * dime.width * dime.length;
    printf("Area: %d\n",Area);

    free(fruits.apple);

    return 0;
}