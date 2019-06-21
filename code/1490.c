#include<stdio.h>
int min(int x,int y);
int max(int x,int y);
int N(int l,int r,int a[],int n);
int M(int l,int r,int a[],int n);
int H(int l,int r,int a[],int n);
int main()
{
    int n,K,i;
    scanf("%d %d",&n,&K);
    int a[n];
    int b[2*K];
    int N1[K];
    int M1[K];
    int H1[K];
    int min1[K];
    int max1[K];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<2*K;i=i+2)
    {
        scanf("%d %d",&b[i],&b[i+1]);
    }

    for(i=0;i<K;i++)
    {
        N1[i]=N(b[2*i],b[2*i+1],a,n);
    //    printf("N1[%d]=%d\n",i,N1[i]);
    }
    for(i=0;i<K;i++)
    {
        M1[i]=M(b[2*i],b[2*i+1],a,n);
   //     printf("M1[%d]=%d\n",i,M1[i]);
    }
    for(i=0;i<K;i++)
    {
        min1[i]=min(N1[i],M1[i]);
    }
    for(i=0;i<K;i++)
    {
        max1[i]=max(N1[i],M1[i]);
    }
    for(i=0;i<K;i++)
    {
        H1[i]=H(min1[i],max1[i],a,n);
    }
    for(i=0;i<K;i++)
    {
        printf("%d\n",H1[i]);
    }
    return 0;

}
int N(int l,int r,int a[],int n)
{
    int i,sum;
    sum=0;
    for(i=l;i<r+1;i++)
    {
        sum+=a[i];
        sum=sum%n;
    }
    return sum;
}
int M(int l,int r,int a[],int n)
{
    int i,sum;
    sum=1;
    for(i=l;i<r+1;i++)
    {
        sum*=a[i];
        sum=sum%n;
    }
    return sum;
}
int H(int l,int r,int a[],int n)
{
    int i,h;
    h=0;
    for(i=l;i<r+1;i++)
    {
        h=h^a[i];
    }
    return h;
}
int min(int x,int y)
{
    return x<y?x:y;
}
int max(int x,int y)
{
    return x>y?x:y;
}