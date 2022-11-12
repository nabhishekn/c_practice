#include <stdio.h>

int main(){
    int a = 3;
    int *ptr1;              
    int *ptr2; 

    //pointer sharing - 2 pointers refer to single pointee            
    ptr1 = &a;              //set ptr1 to refer to a
    ptr2 = &a;              //eet ptr2 to refer to a
    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);
}