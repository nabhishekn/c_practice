#include <stdio.h>

int main(){
    int i, n, sum=0, missing;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Please give values to insert in array: \n");
    for(i=0; i<n-1; i++){
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    missing = (n*(n+1))/2   - sum;
    printf("Missing number is: %d", missing);
    getchar();
}