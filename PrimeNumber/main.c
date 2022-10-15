/*Below program tell you the entered number is a prime number or not*/

#include<stdio.h>

int main()
{
    int i, n;
    /*while(1) loop is a running the programm continuesly untill user will stop it manually*/
    while(1){
    scanf("%d", &n);
    /*Logic to find the entered number is prime or not*/
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
            break;
        }
        if(i>n/2){
            printf("This %d is prime number...\n", n);}
            else{
                 printf("This %d is not prime number...\n", n);
            }
    }
   return 0;
}