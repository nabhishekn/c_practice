#include <stdio.h>

void copy_string (char *target, char *source);

int main()
{
    char target[100], source[100];
    printf("Enter source string\n");
    gets(source);
    copy_string(target, source);
    printf("Target string is \"%s\"\n", target);
    return 0;
    
}

void copy_string (char *target, char *source)
{
    while(*source)
    {
        *target = *source;
        source++;
        target++;
    }
    *target = '\0';
}