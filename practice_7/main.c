#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


  int main() 
{
    char *inwords[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int a, b;
    scanf("%d\n%d", &a, &b);    // a and b will always be <=1
    for (; a <= b; ++a)
    {
        if (a <= 9)
            printf("%s\n", inwords[a-1]);
        else if (a > 9 && ( (a & 1) == 0))
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}