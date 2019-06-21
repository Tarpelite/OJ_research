#include<stdio.h>

int main()
{
    int a[100001];
    int i,n,x,j;
    scanf("%d",&x);
    a[1]=2;
    n=1;
    for (i=3;i<=100005;i++)
    {
        int p=0;
        for(j=1;j<=n;j++)
        {
            if(i%a[j]==0)
            {
                p=1;
                break;
            }
        }
        if (p==0)
        {
           n++;
           a[n]=i;
           if (i>x)
                break;
        }
    }
    printf("%d",a[n]);
    return 0;

}