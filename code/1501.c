#include<stdio.h>
int N(int a[],int l, int r,int n);
int M(int a[],int l,int r,int n);
int H(int a[], int l, int r);
int max(int x,int y);
int min(int x, int y);
int main()
{
    int i,n, k;
    scanf("%d %d",&n,&k);
    int a[n],l[k],r[k];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++){
        scanf("%d %d",&l[i],&r[i]);
    }
    for(i=0;i<k;i++){
        printf("%d\n",H(a,min(N(a,l[i],r[i],n),M(a,l[i],r[i],n)),max(N(a,l[i],r[i],n),M(a,l[i],r[i],n))));
    }
    return 0;
}

int N(int a[],int l, int r,int n)
{
    int i,s=0;
    for(i=l;i<=r;i++){
        s+=a[i];
    }
    return s%n;
}

int M(int a[],int l,int r,int n)
{
    int i;
    int s=1;
    for(i=l;i<=r;i++){
        s*=a[i];
        s=s%n;
    }
    return s%n;
}

int H(int a[], int l, int r)
{
    int i,s;
        s=a[l];
        for(i=l+1;i<=r;i++){
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
    if(x>y)
        return y;
    else
        return x;
}