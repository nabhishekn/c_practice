#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *ptr;
    char ch;

    //Opening file in reading mode
    ptr = fopen("readme.txt", "r");
    
    //If address of the ptr not stored don't open file
    if (NULL == ptr){
        printf("file can't be open\n");
    }
    printf("this is your content\n");

    //Printing the data written in the file
    //character by character using do while loop
    do{
        ch = fgetc(ptr);
        printf("%c", ch);
    }

    //Checking if character is not EOF(end of file)
    
    while (ch != EOF);
    fclose(ptr);                    //If it is EOF stop reading
    return 0;
}