#include <stdio.h>
int n;
int s[10001];
int N(int l,int r);
int H(int l,int r);
int M(int l,int r);
int max(int a,int b);
int min(int a,int b);
int main()
{
    int k,i,l,r;
    int a[10001];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    for(i=0;i<k;i++)
     { scanf("%d%d",&l,&r);
       a[i]=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
     }
    for(i=0;i<k;i++)
        printf("%d\n",a[i]);
     return 0;
}
int N (int l,int r)
{   int i,sum=0;
    for(i=l;i<=r;i++)
       sum+=s[i];
    return sum%n;
}
int M (int l,int r)
{   int i,sum=1;
    for(i=l;i<=r;i++)
       sum=sum*(s[i]%n)%n;
    return sum%n;
}
int H (int l,int r)
{   int i,sum=s[l];
    for(i=l+1;i<=r;i++)
       sum^=s[i];
    return sum;

}
int max(int a,int b)
{
    return (a>b)?a:b;
}
int min(int a,int b)
{
    return (a<b)?a:b;
}