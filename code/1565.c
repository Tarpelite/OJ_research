#include <stdio.h>
#include <stdlib.h>
int a[105],n;
int N(int l,int r)
{
    int result=0;
    for(;l<=r;l++)
    {
        result+=a[l];
    }
    result=result%n;
    return result;
}

int M(int l,int r)
{
    long long int result=1;
    for(;l<=r;l++)
    {
        result=(result*a[l])%n;
    }
    result=result%n;
    return result;
}

int H(int l,int r)
{
    int result;
    result=a[l];
    for(l++;l<=r;l++)
    {
        result=result^a[l];
    }
    return result;
}

int main()
{
    int i=0,m,l,r,res_n,res_m,res_h,min,max;
    scanf("%d %d",&n,&m);
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    i=1;
    while(i<=m){
        scanf("%d %d",&l,&r);
        res_n=N(l,r);
        res_m=M(l,r);
        min=(res_n>res_m?res_m:res_n);
        max=(res_n>res_m?res_n:res_m);
        res_h=H(min,max);
        printf("%d\n",res_h);
        i++;
    }
    return 0;
}