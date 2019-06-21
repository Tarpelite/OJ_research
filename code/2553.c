#include<stdio.h>
int max(int,int);
int min(int,int);
int main()
{
    int n,K,a[1000],N,i,M,max1,min1,H,l,r;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(~scanf("%d%d",&l,&r))
        {for(i=l,N=0,M=1;i<=r;i++)
            {N+=a[i]%n;
             M=((M%n)*(a[i]%n))%n;}
         N=N%n;
         max1=max(M,N);
         min1=min(M,N);
         H=a[min1];
         for(i=min1+1;i<=max1;i++)
            {H=H^a[i];}
        printf("%d\n",H);
        }
    return 0;
}
int max(int x,int y)
{ if(x>y)
    return x;
  return y;
}
int min(int x,int y)
{if(x>y)
    return y;
 return x;
 }