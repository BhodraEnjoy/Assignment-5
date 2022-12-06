#include<stdio.h>

int squares(int n)
{
    if(n == 1)
        return 1;
    return n*n+squares(n-1);
}

int main()
{
    int a,b;
    printf("Enter your number:\n");
    scanf("%d",&a);
    b = squares(a);

    printf("sum of squares of first n natural numbers is : %d\n", b);
    return 0;
}
