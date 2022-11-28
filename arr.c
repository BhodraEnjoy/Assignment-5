#include<Stdio.h>

int main()
{
    int a[5]={35,80,30,45,20},i,max;

    for(i = 1; i <= 5; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    printf("%d",max);

    return 0;
}
