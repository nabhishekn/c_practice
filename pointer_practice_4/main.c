#include <stdio.h>


void main()
{
    char str[] = "abhishek narwankar";
    char *ptr;
    ptr=str;
    printf("%c\n", *ptr);                               //valu of ptr
    printf("address of ptr:%u\n", ptr);                 //address of ptr
    printf("%c\n", *(ptr++ + 1));                       //bracket priority - output - b
    printf("%c\n", *((ptr-- + 5)-1)+5);                 //bracket priority - output - m
    printf("%c %c %c\n", *ptr, *++ptr, *--ptr);         //associativity right to left - output - a a

}