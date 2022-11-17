
/*Addition arithmetic operation using call by reference function*/

#include <stdio.h>
int add(int* , int*);
int main ()
{
    int a, b, result, value;
    printf("Enter two numbers for addition:\n");
    scanf("%d %d", &a, &b);

    result = add(&a, &b);

    printf("Addition is:%d", result);
    
    return 0;
}

int add(int* x, int* y)
{
    int result;
    result = *x + *y;

    return result;
}