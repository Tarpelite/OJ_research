#include<stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))


int N(int l,int r,int n,int a[]);

int H(int l,int r,int a[]);

int main()
{
    int a[101],n,K,i=0;
    int l,r,t,x,y=1,x1,y1,z;

    scanf("%d%d",&n,&K);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(z=1;z<=K;z++)
    {
        scanf("%d%d",&l,&r);

        y=1;
        x=N(l,r,n,a);
        x=x%n;
        for(i=l;i<=r;i++)
        y=((a[i]%n)*(y%n))%n;

        x1=min(x,y);
        y1=max(x,y);
        t=H(x1,y1,a);
        printf("%d\n",t);
    }
}


int N(int l,int r,int n,int a[])
{
    if(r==l) return a[l];
        return a[r]+ N(l,r-1,n,a);
}


int H(int l,int r,int a[])
{
    if(l==r) return a[l];
    return a[l]^H(l+1,r,a);
}