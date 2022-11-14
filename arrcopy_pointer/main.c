#include<stdio.h>

#define MAX_SIZE 100
void printArray(int arr[ ], int size);          //function prototype
int main()
{
    int source_arr[MAX_SIZE], dest_arr[MAX_SIZE];
    int size, i;
    
    int *source_ptr = source_arr;       //pointer declrartion -= set source_ptr to refer to source_arr
    int *dest_ptr = dest_arr;           //pointer declrartion -= set dest_ptr to refer to dest_arr

    int *end_ptr;

printf("Enter size of the array: ");
scanf("%d", &size);
printf("Enter elements in array:\n");

/*this for loop is taking array inputs*/
for(i=0; i<size; i++)
{
    scanf("%d", (source_ptr + i));
}

/*set end_ptr to refer to source_arr[size-1]*/
end_ptr = &source_arr[size - 1];

printf("\nSource array before copying:");
printArray(source_arr, size);

printf("\nDestination array before copying:");
printArray(dest_arr, size);

/*run below loop untill the copy of the content of source_arr into the dest_arr */
while(source_ptr <= end_ptr)
{
    *dest_ptr = *source_ptr;

    source_ptr++;
    dest_ptr++;
    }
printf("\nSource array after copying: ");
printArray(source_arr, size);

printf("\nDestination array after copying: ");
printArray(dest_arr, size);

return 0;
}

/*loop - to print elements untill last element */
void printArray(int *arr, int size)
{
    int i;
    for(i = 0; i<size; i++)
    {
        printf("%d ", *(arr+i));
    }
}