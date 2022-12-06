#include<stdio.h>

int HCF(int n1,int n2)
{
    if(n2 == 0)
        return n1;
    else
        return HCF(n2,n1%n2);
}

int main()
{
    printf("HCF = %d\n",HCF(16,8));
    return 0;
}
