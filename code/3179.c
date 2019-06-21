#include<stdio.h>
#include<stdlib.h>

int A[150];
int n,k;

int N(int l,int r)
{   int sum=0,i,m;
    for(i = l;i<=r;i++)
    {
        m = A[i]%n;
        sum += m;
        sum%=n;
    }
    return sum%n;

}
int M(int l,int r)
{   int sum=1,i,m;
    for(i = l;i<=r;i++)
    {
        m = A[i]%n;
        sum *= m;
        sum%=n;
    }
    return sum%n;

}
int H(int l,int r)
{
    int i,p;
    p = A[l];
    for(i=l+1;i<=r;i++)
    {
        p ^= A[i];
    }
    return p;
}
int main()
{
    int l,r,i,min,max;
    scanf("%d %d",&n,&k);
    for(i = 0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    while(k--)
    {
        scanf("%d %d",&l,&r);
       if(N(l,r)>M(l,r))
        {
            max = N(l,r);
            min = M(l,r);
        }
        else
        {
            max = M(l,r);
            min = N(l,r);
        }
        printf("%d\n",H(min,max));


    }
}