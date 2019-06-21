#include <stdio.h>

int main()
{
    int a[25000]={2},n,
        i,j,k=1;

    for(i = 3;i <100000;i++)
    {
        for(j = 0;j < k;j++)
        {
            if(i%a[j] == 0)
                goto A;
        }
        a[k]=i;
        k++;
        A:;

    }
    /*for(i = 0;i < k;i++)
        printf("%d ",a[i]);*/
    a[k]=100003;

    scanf("%d",&n);

    for(i = 0;i <= k;i++)
    {
        if(a[i] == n)
        {
            printf("%d",a[i+1]);
            break;
        }

    }
    return 0;
}