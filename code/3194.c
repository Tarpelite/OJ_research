#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("2");
        return 0;
    }
    if(n==2)
    {
        printf("3");
        return 0;
    }
    int i,m=n+1;
    int flag=0;
    while(flag==0)
    {
        flag=0;
        for(i=2;i<m;i++)
        {
            if(m%i==0)
            {
                break;
            }
            if(i==m-1)
            {
                flag=1;
            }
        }
        m++;
    }
    printf("%d",m-1);
    return 0;
}