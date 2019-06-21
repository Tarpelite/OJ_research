#include<stdio.h>
int N(int l,int r,int *a,int n)
{
   int j,sigma=0;
   for(j=l;j<=r;j++){sigma+=a[j];}
    return sigma%n;
}
int M(int l,int r,int *a,int n)
{
   int j;
   long long pi=1;
   for(j=l;j<=r;j++){pi*=(a[j]%n);if(pi>200){pi=(pi%n);}}
    return pi%n;
}
int H(int l,int r,int *a,int n)
{
   int N1=N(l,r,a,n);
   int M1=M(l,r,a,n);
  int min=(N1<M1)?N1:M1;
   int max=(N1>M1)?N1:M1;
   int j,xor=a[min];
   if(N1!=M1)
   {for(j=min+1;j<=max;j++) {xor=xor^a[j];}}
   return xor;
}
int main()
{
    int i,n,k,a[110],l[110],r[110],p;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    for(p=1;p<=k;p++){scanf("%d%d",&l[p],&r[p]);}
     for(p=1;p<=k;p++){printf("%d\n",H(l[p],r[p],a,n));}
    return 0;
}