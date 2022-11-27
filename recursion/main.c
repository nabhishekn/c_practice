/*When function call itself is called recursive function*/

/*Base condition - tell the function when to stop*/

#include <stdio.h>

void display(int n);

void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    display(n);
}

void display(int n)
{
    if (n<1) 
    return;

    else
    {
        //printf("%d", n),
        display(n-1);
        printf("%d", n);
    }
}





