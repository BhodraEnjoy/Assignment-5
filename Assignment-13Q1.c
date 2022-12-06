#include<stdio.h>

int sum(int n)
{
    if(n == 1)
        return 1;

    return n+sum(n-1);
}
int main()
{
    int a,b;
    printf("Enter your number:\n");
    scanf("%d",&a);
    b = sum(a);

    printf("sum of first N natural numbers is : %d\n", b);

    return 0;
}
