#include<stdio.h>

int power(int n, int m)
{
    if(m == 0)
        return 1;
    return n*power(n,m-1);
}
int main()
{
    int a,b,c;
    printf("Enter your number:\n");
    scanf("%d %d",&a,&b);
    c = power(a,b);

    printf("The power of any number is : %d\n", c);

    return 0;
}
