#include<stdio.h>

int fib(int n)
{
     if(n == 1|| n ==2)
        return 1;

    return fib(n-1)+fib(n-2);
}

int main()
{
    int a,b;
    printf("Enter your number:\n");
    scanf("%d",&a);
    b = fib(a);

    printf("first N terms of Fibonacci series is : %d\n", b);
    return 0;
}

