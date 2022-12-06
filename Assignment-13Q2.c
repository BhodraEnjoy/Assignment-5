#include<stdio.h>

int odd(int n)
{
    if(n == 1)
        return 1;
    return (2*n-1)+ odd(n-1);

}

int main()
{
    int a,b;
    printf("Enter your number:\n");
    scanf("%d",&a);
    b = odd(a);

    printf("sum of first N odd natural numbers is : %d\n", b);
    return 0;
}
