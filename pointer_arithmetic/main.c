#include <stdio.h>

int main ()
{
    char a[] = "whencanweseeyou";
    int b = 45;
    int *ptr1;
    ptr1 = &b;
    char *ptr;
    ptr = a;
    
    printf("%d\n", *ptr1);                          //print value inside of *ptr1 | use * while printing value 
    printf("%p\n", ptr1);                           //print address of the ptr1 | don't use * while printing address
    *ptr1++;                                        //incrementing address of ptr1 by 4 byte, beacuse int variable
    printf("%p\n", ptr1);                           //printing incremented address of the ptr1
    printf("%d\n", *ptr1);                          //printing incremented value of the ptr1
    
    
    printf("%c\n", *ptr);                           //printing char value of *ptr | use * while printing value 
    printf("%p\n", ptr);                            //printing address of the ptr | don't use * while printing address
    printf("%c\t %c\n", *ptr, *ptr++);              //printing char value of *ptr -> h and *ptr++ -> w -> it will print first then increment | associativity right to left, print w first then h 
    printf("%c\t %c\t %c\n", *++ptr, *--ptr, *ptr--); //printing char value of *ptr-- then *--ptr then *++ptr
    
    ptr = &a[8];                                    //refer a[8] to ptr 
    printf("%c\n", *ptr);                           //printing *ptr that is value at a[8]
    printf("%c\n", *++ptr);                         //printing *++ptr | it will increment first then print
    printf("%p\n", ptr);                            //printing address of the updated ptr | no *
    
}
