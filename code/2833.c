#include<stdio.h>
int N(int,int,int [],int);
int M(int,int,int [],int);
int H(int,int,int [],int);
int min(int,int);
int max(int,int);
int main()
{
    int i,n,k;
    int a[200]={0},l[200]={0},r[200]={0};
    scanf("%d%d",&n,&k);
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;++i)
    {
        scanf("%d%d",&l[i],&r[i]);
    }
    for(i=0;i<k;++i)
    {
        int n1=N(l[i],r[i],a,n),n2=M(l[i],r[i],a,n);
        printf("%d\n",H(min(n1,n2),max(n1,n2),a,n));
    }
	return 0;
 }
int min(int a,int b)
{
    return (a>b?b:a);
}
int max(int a,int b)
{
    return (a<b?b:a);
}
int N(int l,int r,int a[],int n)
{
    int i,s=0;
    for(i=l;i<=r;++i)
    {
        s+=a[i]%n;
        s%=n;
    }
        
    return s;
}
int M(int l,int r,int a[],int n)
{
    int i,s=1;
    for(i=l;i<=r;++i)
    {
        s*=a[i]%n;
        s%=n;
    }
        
    return s;
}
int H(int l,int r ,int a[],int n)
{
    int i,s=a[l];
    for(i=l+1;i<=r;++i)
        s^=a[i];
    return s;
}