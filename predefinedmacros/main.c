/*Program is written to print date and time using predefined macros*/

#include <stdio.h>

int main()
{
    printf("\nDate:%s\n", __DATE__);
    printf("Time:%s\n", __TIME__);
    printf("File:%s\n", __FILE__);
    printf("ANSI:%d\n", __STDC__);

}