#include <stdio.h>

int main()
{ 
    int a[] = {2,5};

    int *ptr;

    ptr = a;                     //assign a to ptr

    printf("%d\n", *ptr);        //printing value of ptr
    printf("%p\n", ptr);         //printing addres of ptr
    printf("%d\n", *ptr++);      //printing updated value of ptr
    printf("%p\n", ptr);         //printing address of updated ptr
    printf("%d\n", *ptr);        //printing new value of ptr 
    printf("%d\n", (*ptr)++);    //printing value after post increment
    printf("%d\n", *ptr);        //printing unpdated value of ptr

 return 0;
}



/*Out Put of this code is

2
0xffffcbd0
2
0xffffcbd4
5
5
6

*/
