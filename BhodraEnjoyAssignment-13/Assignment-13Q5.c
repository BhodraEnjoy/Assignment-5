#include<stdio.h>

int digits(int n)
{
     if(n % 10 == n)
        return n;

    return (n%10)+digits(n/10);
}

int main()
{
    int a,b;
    printf("Enter your number:\n");
    scanf("%d",&a);
    b = digits(a);

    printf("sum of digits of a given number is : %d\n", b);
    return 0;
}
