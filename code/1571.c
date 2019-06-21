#include<stdio.h>
#include<math.h>
int srj(int a[],int n,int l,int r);
int lbw(int a[],int n,int l,int r);
int wyx(int a[],int l,int r);
int max(int,int);
int min(int,int);
int main()
{
    int n,k,i;
    int a[1000],l[1000],r[1000],N[1000],M[1000],Min[1000],Max[1000],H[1000];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k;i++)
        scanf("%d%d",&l[i],&r[i]);
    for(i=0;i<k;i++){
        N[i]=srj(a,n,l[i],r[i]);
        M[i]=lbw(a,n,l[i],r[i]);
        Min[i]=min(N[i],M[i]);
        Max[i]=max(N[i],M[i]);
        H[i]=wyx(a,Min[i],Max[i]);
        printf("%d\n",H[i]);
    }
    return 0;
}

int srj(int a[],int n,int l,int r)
{
    int i,x,sum=0;
    for(i=l;i<r+1;i++){
        sum+=a[i];
    }
    x=sum%n;
    return x;
}
int lbw(int a[],int n,int l,int r)
{
   int i,sum=1,x;
   for(i=l;i<r+1;i++){
    sum*=a[i];
   	sum%=n;
   }
   x=sum;
    return x;
}
int wyx(int a[],int l,int r)
{
    int s,i;
    for(i=l+1,s=a[l];i<r+1;i++){
        s=s^a[i];
    }
    return s;
}
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int min(int x,int y)
{
     if(x<y)
        return x;
    else
        return y;
}