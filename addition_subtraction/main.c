#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m, l, p;
    float a, b, c ,d;
    scanf("%d %d", &n, &m);
    scanf("%f %f", &a, &b);
    l = n+m;
    p = n-m;
    c = a+b;
    d = a-b;
    printf("%d %d\n", l, p);
    printf("%0.1f %0.1f", c, d);
   
    return 0;
}