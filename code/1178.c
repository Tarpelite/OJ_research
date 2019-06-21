#include<stdio.h>
int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}
int N(int *a,int l,int r,int n){
    int i, sum=0, m;
    for(i=l;i<=r;i++){
        sum=(sum+a[i])%n;
    }
    m=sum%n;
    return m;
}
int M(int *a,int l,int r,int n){
    int i, m=1;
    for(i=l;i<=r;i++){
        m=(m%n*a[i]%n)%n;
    }
    return m%n;
}
int H(int *a,int l,int r){
    int i, m;
    m=a[l];
    for(i=l+1;i<=r;i++){
        m^=a[i];
    }
    return m;
}
int main()
{
    int n, K, a[2048], i, l, r, final, y, k;
    scanf("%d%d",&n,&K);
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<K;i++){
        scanf("%d%d",&l,&r);
        y=min(N(a,l,r,n),M(a,l,r,n));
        k=max(N(a,l,r,n),M(a,l,r,n));
        final=H(a,y,k);
        printf("%d\n",final);
    }
    return 0;
}