#include <stdio.h>
int M(int x,int y,int a[],int n);
int N(int x,int y,int a[],int n);
int H(int x,int y,int a[],int n);
int main()
{
    int n,k,i,a[101]={0},b[101]={0};
    int l,r;
    int A,B,C;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    {
      scanf("%d%d",&l,&r);
      b[i]=H(l,r,a,n);
    }
    for(i=0;i<k;i++)
    printf("%d\n",b[i]);
    return 0;

}
int M(int x,int y,int a[],int n)
{
    int sum=0,res;
    int i;
    for(i=x;i<=y;i++)
        sum+=a[i];
    res=sum%n;
    return res;
}
int N(int x,int y,int a[],int n)
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
int H(int x,int y,int a[],int n)
{
    int i,p,q;
    int max,min,yihuo;
    p=M(x,y,a,n);
    q=N(x,y,a,n);
      if(p>q)
        {max=p;min=q;}
      else
        {max=q;min=p;}

      for(i=min+1,yihuo=a[min];i<=max;i++)
        yihuo=yihuo^a[i];
      return yihuo;
}