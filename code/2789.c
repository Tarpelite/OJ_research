#include<stdio.h>
int A[110];
int n;
#define max(a,b)(a>b ? a:b)
#define min(a,b)(a<b ? a:b)
int N(int l,int r)
{
    int i,sum1=0,sum;
    for(i=l;i<=r;i++)
    {
        sum1+=A[i]%n;
    }
    sum=sum1%n;
    return sum;
}
int M(int l,int r)
{
    int i,mul=1;
    for(i=l;i<=r;i++){
    mul=((mul%n)*(A[i]%n))%n;
    }
    return mul;
}
int H(int l,int r)
{
    int i,res=0;
    for(i=l;i<=r;i++){
        res^=A[i];
    }
    return res;
}
int main()
{
 int k,l,r,a1,a2,i,result;
 scanf("%d%d",&n,&k);
 for(i=0;i<n;i++){
    scanf("%d",&A[i]);
 }
 for(i=1;i<=k;i++){
    scanf("%d%d",&l,&r);
    a1=min(N(l,r),M(l,r));
    a2=max(N(l,r),M(l,r));
    result=H(a1,a2);
    printf("%d\n",result);
 }
return 0;
}