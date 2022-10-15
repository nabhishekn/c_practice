#include <stdio.h>
int areaRectangle(int, int);

int main()
{
    int length, breadth, area;
    int (*fp) (int, int);
    while(1){
    printf("Enter length and breadth:\n");
    scanf("%d %d", &length, &breadth);
    fp = areaRectangle;

    area = (*fp)(length, breadth);
    printf("Area of Rectangle is = %d\n", area);

    }

    return 0;

}

int areaRectangle(int length, int breadth)
{
    int area = length * breadth;
    return area; 
}