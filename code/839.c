#include <stdio.h>
int M(int x,int y);
int N(int x,int y);
int H(int x,int y);
int a[101];
int n;
int main()
{
    int k,i,b[101]={0};
    int l,r;
    int A,B,C;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    {
      scanf("%d%d",&l,&r);
      b[i]=H(l,r);
    }
    for(i=0;i<k;i++)
    printf("%d\n",b[i]);
    return 0;

}
int M(int x,int y)
{
    int sum=0,res;
    int i;
    for(i=x;i<=y;i++)
    {
        sum+=a[i];
        sum=sum%n;
    }
    res=sum%n;
    return res;
}
int N(int x,int y)
{
    int ans=1,res;
    int i;
    for(i=x;i<=y;i++)
       {
         ans*=a[i];
         ans=ans%n;
       }
    return ans%n;
}
int H(int x,int y)
{
    int i,m,n;
    int max,min,yihuo;
    m=M(x,y);
    n=N(x,y);
      if(m>n)
        {max=m;min=n;}
      else
        {max=n;min=m;}

      for(i=min+1,yihuo=a[min];i<=max;i++)
        yihuo=yihuo^a[i];
      return yihuo;
}