#include <stdio.h>
#include <stdlib.h>
int N(int a[],int n,int l,int r)
{
    int i,result=0;
    for(i=l;i<=r;i++)
    {
        result=(result+a[i])%n;
    }
    return result;
}

int M(int a[],int n,int l,int r)
{
    int i,result=1;
    for(i=l;i<=r;i++)
    {
        result=(result*a[i])%n;
    }
    return result;
}

int H(int a[],int l,int r)
{
    int i,result=0;
    for(i=l;i<=r;i++)
    {
        result=result^a[i];
    }
    return result;
}


int main()
{
    int n,k,a[100],c[100],i,j,l,r,min,max;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<k;j++)
    {
        scanf("%d%d",&l,&r);
        min=N(a,n,l,r);
        max=M(a,n,l,r);
        if(min>max)
        {
            max=N(a,n,l,r);
            min=M(a,n,l,r);
        }
        c[j]=H(a,min,max);
    }
    for(j=0;j<k;j++)
        printf("%d\n",c[j]);
    return 0;
}