
/*This code is for checking dangling pointer*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*taking 1 pointer and allocate memory location*/
    int *ptr = (int*) malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n", *ptr);
    free(ptr);

    /*after free function that ptr pointer has no memeory 
    allocation still that pointer is pointing to that memory address*/
    printf("%d\n", *ptr);               //print garbage value

    /*to avaoid above issue we need too assign NULL pointer to it*/
    ptr = NULL;

    //printf("%d\n", *ptr);             //can't deference NULL pointer - it will crash the program


}


/*if you are accessing the pointer outoff the scope/function the that pointer will act as a dangling pointer*/
//to handle this error - assign "static" storage specifier to variable//