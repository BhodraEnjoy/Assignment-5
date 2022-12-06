#include<stdio.h>

int fact(int n)
{
     if(n == 1)
        return 1;

    return n*fact(n-1);
}

int main()
{
    int a,b;
    printf("Enter your number:\n");
    scanf("%d",&a);
    b = fact(a);

    printf("factorial of a given number is : %d\n", b);
    return 0;
}

