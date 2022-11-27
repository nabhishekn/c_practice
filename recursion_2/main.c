/*A function call itself is knbow as recusion*/

#include <stdio.h>

void nauralmnumbers(int lowerlimit, int upperlimit);

int main()
{
    int lowerlimit, upperlimit;
    printf("Enter lowerlimit: ");
    scanf("%d", &lowerlimit);
    printf("Enter upperlimit: ");
    scanf("%d", &upperlimit);
    printf("The natural numbers between %d to %d : ", lowerlimit, upperlimit);
    
    nauralmnumbers(lowerlimit, upperlimit);
}

void nauralmnumbers(int lowerlimit, int upperlimit)
{
    if (lowerlimit > upperlimit)
    return;

    printf("%d ", lowerlimit);

    //call the function recursively to print the next number
    nauralmnumbers(lowerlimit + 1, upperlimit);
}
