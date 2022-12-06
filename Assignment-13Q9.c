#include<stdio.h>
int Countdigit(int n, int c)
{
    if(n == 0)
        return c;
    else
        Countdigit(n/10,c+1);

}
int main()
{
    printf("count = %d",Countdigit(145,0));
    return 0;
}

