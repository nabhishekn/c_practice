/* Date: 23-09-2022 12:58PM
Program is taking size of array ("n") and "n" number of integer elements from the user
and using "count" variable we are determinding the trend of the sequence of the array is in ascending or descending.*/


#include<stdio.h>

int count = 0;  

/* Main function will take an input from the user and publish 
ascending or descending trend of the series of integer numbers*/

int main()
{
    /*Variable declarations*/

    int i,n;
    

    /*Take size of an array and integer elements from the user*/

    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];                                  
    printf("Enter integer elements in series below:\n");

     for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*Comparison between current and previous integer element*/

    for(i = 0; i < n; i++)                              
    {
        if((arr[i] < arr[i+1]) && (arr[i+1] != arr[n]))
        {
            printf("i_small_+1\t");
            count++;                                                
        }
        
        else if((arr[i] > arr[i+1]) && (arr[i+1] != arr[n]))
        {
            printf("i_big_-1\t");
            count--;
        }
        
        else{
            printf("No_count\t");
            count;
        }
    }

    /*Print Ascending or Descending Trend as per count status*/

    printf("\nValue of : %d\n", count);

    if (count > 0)
    {
        printf("Increasing Trend\n");
    }
        else if(count < 0 )
        {
            printf("Drecreasing Trend\n");
        } 
            else
            {
                printf("Invalid\n");
            }

}

