#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n;
    int a[20],b[20];
    scanf("%d%d",&m,&n);
    if(2*n>m)
        n=m-n;
    for(int i=0;i<n;i++)
        a[i]=n-i;
    for(int i=0;i<n;i++)
        b[i]=m-n+1+i;
    int size=n;
    unsigned res=1;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(b[j]%a[i]==0)
            {
                res=res*b[j]/a[i];
                size--;
                for(int k=j;k<size;k++)
                {
                    b[k]=b[k+1];
                }
                for(int k=i;k<size;k++)
                    a[k]=a[k+1];
                break;
            }
        }
    }
    if(size>=1)
    {
        for(int i=0;i<size;i++)
            res*=b[i];
        for(int i=0;i<size;i++)
            res/=a[i];
    }
    printf("%u",res);
    return 0;
}