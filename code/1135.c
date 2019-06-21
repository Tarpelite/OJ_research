#include<stdio.h>
int n;
int arr1[10001];
int N(int l,int r)
{
    int i,s=0;
    for(i=l;i<=r;i++)
        s+=arr1[i];
    return s%n;
}
int M(int l,int r)
{
    int i,s=1;
    for(i=l;i<=r;i++){
        s*=arr1[i];
        if(s>n)
            s%=n;
    }
    return s%n;
}
int H(int l,int r)
{
    int i,s=arr1[l];
    for(i=l+1;i<=r;i++)
        s=s^arr1[i];
    return s;
}
int min(int a,int b)
{
    if(a>b)
        return b;
    return a;
}
int max(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
int main()
{
    int k,i;
    int arr2[201];
    scanf("%d%d",&n, &k);
    for(i=0;i<n;i++)
        scanf("%d",&arr1[i]);
    for(i=0;i<2*k;i=i+2){
        scanf("%d%d",&arr2[i],&arr2[i+1]);
    }
    for(i=0;i<2*k;i=i+2){
        printf("%d\n",H(min(N(arr2[i],arr2[i+1]),M(arr2[i],arr2[i+1])),max(N(arr2[i],arr2[i+1]),M(arr2[i],arr2[i+1]))));
    }
    return 0;
}