#include<stdio.h>
int N(int,int);
int M(int,int);
int H(int,int);
int max(int,int);
int min(int,int);
int A[10001];
int n,K;

int main(void)
{
    int l,r;
    int i = 0;
    int t;
    int ans;
    scanf("%d %d\n",&n,&K);
    t = n;
    while(t--)
    {
        scanf("%d",&A[i]);
        i++;
    }
    t = K;
    while(t--)
    {
        scanf("%d %d",&l,&r);
        printf("%d\n",H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))));
    }
    return 0;
}

int N(int l,int r)
{
    int sum = 0;
    for(;l<=r;l++)
        sum += A[l]%n;
    return sum % n;
}

int M(int l,int r)
{
    int multiply = 1;
    for(;l<=r;l++)
        multiply = ((multiply%n)*(A[l]%n))%n;
    return multiply % n;
}

int H(int l,int r)
{
    int exclusive_or = 0;
    for(;l<=r;l++)
        exclusive_or = exclusive_or^A[l];
    return exclusive_or;
}

int max(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}

int min(int a,int b)
{
    if(a>=b)
        return b;
    else
        return a;
}