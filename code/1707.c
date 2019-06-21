#include<stdio.h>
int main()
{
    int m,n,p,i;
    scanf("%d",&n);
    for(m=n+1;m<1000000;m++)
    {
        p=0;
        for(i=2;i<m;i++)
        {
            if(m%i!=0)
                p++;
        }
        if(p==m-2)
            break;
    }
    printf("%d",m);
    return 0;
}