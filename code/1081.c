#include <stdio.h>
#include <stdlib.h>
int N(int,int);
int M(int,int);
int H(int,int);
int min(int,int);
int max(int,int);

int a[1005],n;

int main()
{
    int k,l,r,i,j,p,q,f,h ;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<k;j++){
        scanf("%d%d",&l,&r);
        p=N(l,r);q=M(l,r);f=min(p,q);h=max(p,q);
        printf("%d\n",H(f,h));
    }
    return 0;
}

int N(int x,int y)
{
    int sum=0,i=0;
    for(i=x;i<=y;i++){
        sum+=a[i];
        sum=sum%n;
    }

    return sum;
}

int M(int x,int y)
{
    int d=1,i=0;
    for(i=x;i<=y;i++){
       d*=a[i];
       d=d%n;
    }
    return d;
}

int H(int x,int y)
{
   int b=0,i=0;
   for(i=x;i<=y;i++){
    b=b^a[i];
   }
   return b;
}

int min(int x,int y)
{
    if(x>y) x=y;
    return x;
}

int max(int x,int y)
{
    if(x<y) x=y;
    return x;
}