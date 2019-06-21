#include<stdio.h>
#define max(a,b)((a)>(b)?(a):(b))
#define min(a,b)((a)<(b)?(a):(b))

int A[100], n,k, i=0,j=0, l[100], r[100],x=0, y=1,z, x1, x2;
int N(int l,int r);
int M(int l,int r);
int H(int l,int r);
int main()
{
    scanf("%d%d", &n, &k);
    for(i=0; i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    while(j<k)
    {
        scanf("%d%d", &l[j],&r[j]);
        j++;
    }
    for(j=0;j<k;j++)
    {
        x1=min(N(l[j],r[j]),M(l[j],r[j]));
        x2=max(N(l[j],r[j]),M(l[j],r[j]));
        printf("%d\n",H(x1,x2));
    }

    return 0;
}

int N(int a, int b)
{   x=A[a];
    for(i=a+1; i<=b;i++)
    {
        x=x+A[i];
    }
    x=x%n;
    return x;
}

int H(int a, int b)
{   z=A[a];
    for(i=a+1; i<=b;i++)
    {
        z=z^A[i];
    }
    return z;
}

int M (int a, int b)
{
     for(i=a,y=1 ; i<=b;i++)
    {
        y=(y*A[i])%n;
    }
    return y;
}