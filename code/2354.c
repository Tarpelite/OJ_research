#include<stdio.h>


int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a<b?a:b;
}
int H(int l,int r,int a[10000],int n){

    int i,sum=1;

    sum=a[l];

for(i=l+1;i<=r;i++){

    sum=sum^a[i];

}

return sum;

}

int main()
{
   int n,K;
   scanf("%d%d",&n,&K);
   int i,i1;
   int a[10000];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   int l,r;


   for(i1=0;i1<K;i1++)
       {
           scanf("%d%d",&l,&r);


int N=a[l],M=a[l];
   for(i=l+1;i<=r;i++)
   {N=(N%n+a[i]%n);}
   N=N % n;
    for(i=l+1;i<=r;i++)
   {M=(a[i]%n)*(M%n);}
   M=M % n;


   printf("%d\n",H(min(N,M),max(N,M),a,n));


       }

}