#include <stdio.h>

int main()
{
    int number = 7;
    char c = 'M';
    char s[10] = "MYTEST";
    
    void *ptr;
    void *ptr1;

    ptr = &number;
    ptr1 = &c;

    printf("%d\n", (*(int*)ptr));
    printf("%c\n", (*(char*)ptr1)); 
    printf("%s", s);
}