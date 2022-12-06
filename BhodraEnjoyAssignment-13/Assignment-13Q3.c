#include<stdio.h>

int even(int n)
{
    if(n == 1)
        return 2;

       return 2*n+even(n-1);
}

int main()
{
    int a,b;
    printf("Enter your number:\n");
    scanf("%d",&a);
    b = even(a);

    printf("sum of first N even natural numbers is : %d\n", b);
    return 0;
}

