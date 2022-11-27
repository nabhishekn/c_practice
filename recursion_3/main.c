/*A function call itself is call recursion*/

/*Program for fibonacci series*/
// #include <stdio.h>


// int fibonacci(int i)
// {
//     if(i == 0){
//     return 0;
//     }
//     if(i == 1){
//     return 1;
//     }

//     return fibonacci(i - 1) + fibonacci(i - 2);
// }


// int main()
// {
//     int n=5, i;
//      for (i=0; i<n; i++)
//      {
//         printf("%d ", fibonacci(i));
//      }
// }


/*Program to find factorial*/

#include <stdio.h>

int factorial(int a);

int main()
{
    int a = 5, f;
    printf("factorial of %d\n", a);
    f = factorial(a);
    printf("%d\n", f);
}

int factorial(int a)
{
    if (a == 0){
        return 0;
    }
    else if (a == 1){
        return 1;
    }
    else

    return a*factorial(a-1);
}
