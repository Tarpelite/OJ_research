#include<stdio.h>
int n;
int max(int,int);
int min(int,int);
int N(int,int);
int M(int,int);
int H(int,int);
int a[105],b[105];
int main()
{
    int k,l,r,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    {
        scanf("%d %d",&l,&r);
       b[i]=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
    }
    for(i=0;i<k;i++)
        printf("%d\n",b[i]);
    return 0;

}
int max(int x,int y)
{
   if(x>y)
        return x;
   else return y;
}

int min(int x,int y)
{
    if(x>y)
        return y;
    else return x;
}
int N(int l,int r)
{
    int sum=0,i;
    for(i=l;i<=r;i++)
    {
        sum+=a[i];
        sum=sum%n;
    }
    return sum%n;
}
int M(int l,int r)
{
    int sum=1,i;
    for(i=l;i<=r;i++)
    {
        sum*=a[i];
        sum=sum%n;
    }
    return sum%n;
}
int H(int l,int r)
{
    int sum,i;
    sum=a[l];
    for(i=l+1;i<=r;i++)
        sum=sum^a[i];
    return sum;
}